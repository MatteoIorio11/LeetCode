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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return tree_insert(0, nums.size()-1, nums);
    }
    TreeNode* tree_insert(int l, int r, vector<int>& nums){
        if(l > r){
            return nullptr;
        }
        int mid = l + (r-l)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = tree_insert(l, mid-1, nums);
        node->right = tree_insert(mid+1, r, nums);
        return node;
    }
};