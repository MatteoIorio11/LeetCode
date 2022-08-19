class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, size = INT_MAX, sum = 0;
        for(int right = 0; right < nums.size(); right++){
            sum+=nums[right];
            if(sum >= target){
                while((sum-nums[left]) >= target){
                    sum-=nums[left];
                    left++;
                }
                size = min(size, right-left+1);
            }
            
        }
        return size == INT_MAX ? 0 : size;
    }
};