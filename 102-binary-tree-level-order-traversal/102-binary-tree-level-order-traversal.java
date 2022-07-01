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
import java.util.List;
import java.util.LinkedList;
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> out = new LinkedList<>();
        binarySearch(out, root, 0);
        return out;
    }
    private void binarySearch(List<List<Integer>> list, TreeNode root,int height){
        if(root == null){
            return ;
        }
        
        if(height >= list.size()){
            list.add(new LinkedList<Integer>());
        }
        list.get(height).add(root.val);
        height++;
        binarySearch(list, root.left, height);
        binarySearch(list, root.right, height);
    }
}