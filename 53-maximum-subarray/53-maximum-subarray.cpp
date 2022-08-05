class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(sum < 0)
                sum = 0;
            sum+=nums[i];
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};