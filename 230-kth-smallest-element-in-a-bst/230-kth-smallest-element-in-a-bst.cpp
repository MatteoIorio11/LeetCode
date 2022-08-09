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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> values;
        values.push_back(0);
        inorderTreeWalk(root, values);
        return values[k];
    }
    void inorderTreeWalk(TreeNode* root, vector<int>& values){
        if(root != NULL){
            inorderTreeWalk(root->left, values);
            values.push_back(root->val);
            inorderTreeWalk(root->right, values);
        }
    }
};