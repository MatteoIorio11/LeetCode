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
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL){
            return;
        }
        vector<int> vector;
        getLeft(root->left, vector);
        getRight(root->right, vector);
        TreeNode* r = root;
        for(int i = 0; i < vector.size(); i++){
            root->left = NULL;
            root->right = new TreeNode(vector[i]);
            root = root->right;
        }
        root = r;
    }
    
    void getLeft(TreeNode* root, vector<int> & v){
        if(root == NULL){
            return;
        }

        v.push_back(root->val);
        getLeft(root->left, v);
        getLeft(root->right, v);
        
    }
    
    void getRight(TreeNode* root, vector<int> & v){
        if(root == NULL){
            return;
        }

        v.push_back(root->val);
        getRight(root->left, v);
        getRight(root->right, v);
        
    }
};