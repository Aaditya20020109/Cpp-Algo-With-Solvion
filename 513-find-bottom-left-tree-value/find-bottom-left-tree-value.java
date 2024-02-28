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
     public static int findBottomLeftValue(TreeNode root) {
        Queue<TreeNode> q = new LinkedList<>();
        ArrayList<ArrayList<Integer>> v = new ArrayList<>();
        q.add(root);
        q.add(null);
        ArrayList<Integer> level = new ArrayList<>();
        while (!q.isEmpty()) {
            TreeNode node = q.remove();
            if (node == null) {
                v.add(level);
                level = new ArrayList<>();
                if (q.isEmpty())
                    break;
                else
                    q.add(null);
            } else {
                level.add(node.val);
                if (node.left != null)
                    q.add(node.left);
                if (node.right != null)
                    q.add(node.right);
            }

        }

        int size_1 = v.size();
        ArrayList<Integer> lastRow = v.get(size_1 - 1);

    return lastRow.get(0);        
    }
}