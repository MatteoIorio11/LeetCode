/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    private TreeNode ans = null;
    private boolean search(TreeNode curr, TreeNode p, TreeNode q){
        if(curr == null){
            return false;
        }
        int left = this.search(curr.left, p, q) ? 1 : 0;
        int right = this.search(curr.right, p, q) ? 1 : 0;
        int mid = (curr  == p || curr == q) ? 1 : 0;
        if((left+right+mid) >=2){
            ans = curr;
        }
        return (left+right+mid) > 0;
    }
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        this.search(root, p, q);
        return this.ans;
    }
}