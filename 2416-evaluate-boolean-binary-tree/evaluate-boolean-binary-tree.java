/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int recur(TreeNode root)
    {
        if(root.val == 0)return 0;
        if(root.val == 1)return 1;

        int left = recur(root.right);
        int right = recur(root.left);

        if(root.val == 3)return (left & right);
        return (left | right);
    }
    public boolean evaluateTree(TreeNode root) {
      int ans = recur(root);
      if(ans == 0)return false;
      return true;   
        
    }
}