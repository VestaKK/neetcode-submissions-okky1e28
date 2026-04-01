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

    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> out = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();

        if (root == null) {
            return out; 
        }

        queue.add(root);
        while(!queue.isEmpty()) {
            List<Integer> levelList = new ArrayList<>();   
            Queue<TreeNode> newQueue = new LinkedList<>(); 

            while (!queue.isEmpty()) {
                TreeNode curr = queue.remove();
                levelList.add(curr.val);
                if (curr.left != null) {
                    newQueue.add(curr.left);
                }
                if (curr.right != null) {
                    newQueue.add(curr.right);
                }
            }
            out.add(levelList);
            queue = newQueue;
        }

        return out;
    }
}
