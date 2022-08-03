class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        return max(helper(nums, 0, nums.size()-1), helper(nums, 1, nums.size()));
    }
    int helper(vector<int> n, int st, int en){
        int tmp = 0, c1 = 0, c2 = 0;
        for(int i = st; i < en; i++){
            tmp = max(n[i]+c1, c2);
            c1 = c2;
            c2 = tmp;
        }
        return c2;
    }
};