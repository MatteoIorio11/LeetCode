/*
// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}
    
    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/

class Solution {
    public Node connect(Node root) {
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        while (q.size() > 0){
            Node prec = null;
            Node last = null;
            int len = q.size();
            for(int i = 0; i < len; i++){
                last = q.poll();
                if(last != null){
                    q.add(last.left);
                    q.add(last.right);
                }
                if(prec != null){
                    prec.next = last;
                }
                prec = last;
            }
            if(last != null){
                last.next = null;
            }
        }
        return root;
    }
}