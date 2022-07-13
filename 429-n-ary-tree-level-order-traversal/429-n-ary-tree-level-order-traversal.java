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

class Solution {
    public List<List<Integer>> levelOrder(Node root) {
        List<List<Integer>> list = new LinkedList<>();
        Queue<Node> queue = new LinkedList<>();
        queue.add(root);
        while(queue.size() > 0){
            List<Integer> elements = new LinkedList<>(); //list.add(new LinkedList<>());
            int len = queue.size();
            for(int i = 0; i < len; i++){
                Node node = queue.poll();
                if(node != null){
                    elements.add(node.val);
                    for(Node child : node.children){
                        queue.add(child);
                    }
                }
            }
            if(!elements.isEmpty()){list.add(elements);}
        }
        return list;
    }
}