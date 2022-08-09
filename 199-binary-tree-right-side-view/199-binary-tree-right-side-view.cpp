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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL){
            return {};
        }
        vector<int> ans(0);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* node = NULL;
            TreeNode* last = NULL;
            int len = q.size();
            for(int i = 0; i < len; i++){
                node = q.front();
                q.pop();
                if(node != NULL){
                    q.push(node->left);
                    q.push(node->right);
                    last = node;
                }
            }
            if(last != NULL){
                ans.push_back(last->val);
            }
        }
        return ans;
    }
};