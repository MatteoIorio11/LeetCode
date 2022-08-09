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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> v(0);
        vector<int> values(0);
        dfs(targetSum, root, v, values);
        return v;
    }
    void dfs(int targetSum, TreeNode* root, vector<vector<int>>& v, vector<int>& vals){
        if(root == NULL){
            return;
        }
        if(root->left == NULL and root->right == NULL and targetSum == root->val ){
            vals.push_back(root->val);
            v.push_back(vals);
            vals.pop_back();
            return;
        }
        targetSum-=root->val;
        vals.push_back(root->val);
        dfs(targetSum, root->left, v, vals);
        dfs(targetSum, root->right, v, vals);
        vals.pop_back();
    }
};