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
    int pseudoPalindromicPaths (TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        vector<int> m(10, 0);
        explore(root, m);
        return ans;
    }
    
    void explore(TreeNode* r, vector<int> m){
        if(r != NULL){
            m[r->val]++;
            
            if(r->left == NULL and r->right == NULL){
                int odd = 0;
                for(int x : m){
                    if(x % 2 != 0){
                        odd++;
                    }
                }
                if(odd <= 1){
                    ans++;
                }

            }
            explore(r->left, m);
            explore(r->right, m);
        }
    }
};