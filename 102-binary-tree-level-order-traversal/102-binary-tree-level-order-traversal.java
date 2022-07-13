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
        List<List<Integer>> list = new LinkedList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        int level = 0;
        int nulls = 0;
        while(queue.size() > 0){
            int l = queue.size();
            list.add(new LinkedList<Integer>());
            for(int i = 0; i < l; i++){
                TreeNode node = queue.poll();
                if(node != null){
                    list.get(level).add(node.val);
                    queue.add(node.left);
                    queue.add(node.right);
                }else{
                    nulls++;
                }
            }
            if(nulls == l){list.remove(level);}
            level++;
            nulls = 0;
        }
        return list;
    }

}