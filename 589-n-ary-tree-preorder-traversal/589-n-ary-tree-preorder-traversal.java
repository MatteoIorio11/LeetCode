/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/
import java.util.List;
import java.util.LinkedList;
class Solution {
    public List<Integer> preorder(Node root) {
        List<Integer> out = new LinkedList<>();   
        if(root == null){
            return out;
        }else{
            out.add(root.val);
            for(var node : root.children){
                var z = preorder(node);
                out.addAll(z);
            }
        }
        return out;
    }
}