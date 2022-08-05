class Solution {
public:
    vector<int> dp;
    Solution(){
        dp.resize(1001);
        fill(dp.begin(), dp.end(), -1);
    }
    int combinationSum4(vector<int>& nums, int target, int sum=0) {
        if(sum > target){
            return 0;
        }
        if(sum == target){
            return 1;
        }
        if(dp[sum] != -1){
            return dp[sum];
        }
        int ways = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]+sum <= target){
                ways+=combinationSum4(nums, target, nums[i]+sum);
            }
        }
        return dp[sum] = ways;    
    }

};