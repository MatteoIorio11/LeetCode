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
    public boolean findTarget(TreeNode root, int k) {
        return exploreBST(root, root, k);
    }
    
    private boolean exploreBST(TreeNode root, TreeNode node, int k){
        if(node == null){return false;}
        //System.out.println( " BST WALK -> " + node.val);
        var val = k-node.val;
        //System.out.println( "LOOKING FOR ->" + val);
        var out = searchBST(root, node, val);
        //System.out.println( "RETURNED VALUE ->" + out);
        if(out != null){
            return true;
        }else{
            var l = exploreBST(root, node.left, k);
            var r = exploreBST(root, node.right, k);
            return l == true || r == true;
        }
    }
    
    private boolean equals(TreeNode n1, TreeNode n2){
        if(n1.left == n2.left && n1.right == n2.right &&
          n1.val == n2.val){
            return true;
        }
        return false;
    }
    
    public TreeNode searchBST(TreeNode root, TreeNode node, int target){
        if(root == null || (root.val ==  target && !equals(root, node))){
            //System.out.println(" FIND VAL OR NIL " + root);
            return root;
        }  
        //System.out.println(" SEARCH BST -> " + root.val);
        if(target < root.val){
            return searchBST(root.left, node, target);
        }
        else{
        //System.out.println( "SEARCH BST ROOT :  ->");
            return searchBST(root.right, node, target);
        }
    }
}