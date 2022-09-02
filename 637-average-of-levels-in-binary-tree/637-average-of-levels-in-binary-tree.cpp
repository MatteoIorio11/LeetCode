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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        vector<double> v(0);
        q.push(root);
        while(!q.empty()){
            TreeNode* node = NULL;
            int len = q.size();
            double sum = 0;
            for(int i = 0; i < len; i++){
                node = q.front();
                q.pop();
                if(node != NULL){
                    sum+=node->val;
                    if(node->left != NULL)
                        q.push(node->left);
                    if(node->right != NULL)
                        q.push(node->right);
                }
            }
            v.push_back(sum/len);
        }
        return v;
    }
};