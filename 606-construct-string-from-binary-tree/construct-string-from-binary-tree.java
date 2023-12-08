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
    public void recur(TreeNode root,StringBuilder sb)
    {
      sb.append(root.val);
      if(root.left!=null)
      {
        sb.append('(');
        recur(root.left,sb);
        sb.append(')');
      }
      
      if(root.right!=null)
      {
        if(root.left==null) {sb.append("()");}
        sb.append('(');
        recur(root.right,sb);
        sb.append(')');

      }
      
        
    }
    public String tree2str(TreeNode root) {
        StringBuilder sb = new StringBuilder();
        recur(root,sb);
        // sb.append(')');
        return sb.toString();
        
    }
}