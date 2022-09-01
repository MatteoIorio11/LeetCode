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
    int ans = 0;
    int goodNodes(TreeNode* root) {
        foo(root->val, root);
        return ans;
    }
    
    void foo(int maxV, TreeNode* node){
        if(node == NULL){
            return;
        }
        if(node->val >= maxV){
            ans++;
            maxV = node->val;
        }
        foo(maxV, node->right);
        foo(maxV, node->left);    
    }
};