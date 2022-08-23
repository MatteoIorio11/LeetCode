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
    bool strN(TreeNode* root,TreeNode* sroot){
        if(!root && !sroot) return true;
        if(!root && sroot) return false;
        if(root && !sroot) return false;
        if(root->val==sroot->val){
             return strN(root->left,sroot->left) && strN(root->right,sroot->right);
        }else{
            return false;
        }
       
        
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root) return false;
        if(root && !subRoot) return true;
        if(root->val==subRoot->val){
            if( strN(root,subRoot)) return true;
        }
        return isSubtree(root->left ,subRoot) || isSubtree(root->right,subRoot); 
        
    }
};