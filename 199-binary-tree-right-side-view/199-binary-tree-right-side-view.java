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
    public List<Integer> rightSideView(TreeNode root) {
        if(root == null){return List.of();}
        List<Integer> list = new LinkedList<>();
        BFS(root, list);
        return list;
    }
    
    private void BFS(TreeNode root, List<Integer> list){
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        while(queue.size() > 0){
            TreeNode right = null;
            var l = queue.size();
            for(int i = 0; i < l; i++){
                var node = queue.poll();
                if(node != null){
                    right = node;
                    queue.add(node.left);
                    queue.add(node.right);
                }
            }
            if(right != null){list.add(right.val);}
        }
    }
}