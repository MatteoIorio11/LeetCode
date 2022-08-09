/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    stack<int> values;
    BSTIterator(TreeNode* root) {
        traverse(root);
    }
    
    int next() {
        int val = values.top();
        values.pop();
        return val;
    }
    void traverse(TreeNode* node){
        if(node != NULL){
            traverse(node->right);
            values.push(node->val);
            traverse(node->left);
        }
    }
    bool hasNext() {
        return !values.empty();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */