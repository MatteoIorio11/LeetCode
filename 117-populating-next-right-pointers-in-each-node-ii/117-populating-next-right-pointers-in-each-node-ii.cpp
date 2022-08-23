/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* prev = NULL;
            Node* node = NULL;
            int len = q.size();
            for(int i = 0; i < len; i++){
                if(i == 0){
                    prev = NULL;
                }
                node = q.front(); 
                q.pop();
                if(node != NULL){
                    node->next = prev;
                    q.push(node->right);
                    q.push(node->left);
                    prev = node;
                }
            }
        }
        return root;
    }
};