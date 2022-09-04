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
    map<TreeNode*, pair<int,int>> m;
    map<int, map<int,multiset<int>>> v;
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        m[root] = {0,0};
        values(root);
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            TreeNode* node = NULL;
            int len = q.size();
            for(int i = 0; i < len; i++){
                node = q.front();
                q.pop();
                if(node != NULL){
                    int row = m[node].first, col = m[node].second;
                    v[col][row].insert(node->val);
                    q.push(node->left);
                    q.push(node->right);
                }
            }
        }
        for(auto q:v){
            vector<int> col;
            for(auto p:q.second){
                col.insert(col.end(),p.second.begin(),p.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
    
    
    void values(TreeNode* node){
        if(node != NULL){
            if(node->left != NULL)
                m[node->left] = {m[node].first + 1, m[node].second-1};
            if(node->right != NULL)
                m[node->right] = {m[node].first + 1, m[node].second+1};
            values(node->left);
            values(node->right);
        }
    }
};