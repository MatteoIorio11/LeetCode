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
import java.util.LinkedList;
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> list = new LinkedList<>();
        Deque<TreeNode> queue = new LinkedList<>();
        boolean left = true;
        int level = 0;
        int nulls = 0;
        
        queue.add(root);
        
        while(queue.size() > 0){
            list.add(new LinkedList<>());    
            int len = queue.size();
            
            for(int i = 0; i < len; i++){
                if(left){
                    TreeNode node = queue.removeLast();
                    if(node != null){
                        list.get(level).add(node.val);
                        queue.addFirst(node.left);
                        queue.addFirst(node.right);
                    }else{
                        nulls++;
                    }
                }else{
                   TreeNode node = queue.pollFirst();  
                    if(node != null){
                        list.get(level).add(node.val);
                        queue.addLast(node.right);
                        queue.addLast(node.left);
                    }else{
                        nulls++;
                    }
                }
            }
            if(nulls == len){list.remove(level);}
            left = !left;
            level++;
            nulls = 0;
        }
        return list;
    }
}