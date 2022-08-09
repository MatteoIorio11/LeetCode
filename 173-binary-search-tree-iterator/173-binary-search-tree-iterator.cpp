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
    TreeNode* tree = NULL;
    vector<int> values;
    int index = 0;
    BSTIterator(TreeNode* root) {
        tree = root;
        traverse(tree);
    }
    
    int next() {
        int val = values[index];
        index++;
        return val;
    }
    void traverse(TreeNode* node){
        if(node != NULL){
            traverse(node->left);
            values.push_back(node->val);
            traverse(node->right);
        }
    }
    bool hasNext() {
        return index < values.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */