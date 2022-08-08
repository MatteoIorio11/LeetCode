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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        deque<TreeNode*> q;
        q.push_back(root);
        bool left = true;
        vector<int> level(0);
        vector<vector<int>> ans(0);
        while(!q.empty()){
            TreeNode* node = NULL;
            int len = q.size();
            
            for(int i = 0; i < len; i++){

                if(left){
                    node = q.back();
                    q.pop_back();
                    if(node != NULL){
                        q.push_front(node->left);
                        q.push_front(node->right);
                        level.push_back(node->val);
                    }
                }else{
                    node = q.front();
                    q.pop_front();
                    if(node != NULL){
                        q.push_back(node->right);
                        q.push_back(node->left);
                        level.push_back(node->val);
                    }
                }
            }
            
            left = !left;
            if(level.size()>0){
                ans.push_back(level);
            }
            level.clear();
        }
        return ans;
    }
};