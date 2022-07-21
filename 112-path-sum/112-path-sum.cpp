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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root){
            return false;
        }
        int sum = 0;
        return dfs(root, sum, targetSum);
    }
    bool dfs(TreeNode* root, int sum, int target){
        if(!root){
            return false;
        }
        if(!root->left and !root->right){
            sum+=root->val;
            return sum == target;
        }
        return dfs(root->left, sum+root->val, target) or dfs(root->right, sum+root->val, target);
    }
};