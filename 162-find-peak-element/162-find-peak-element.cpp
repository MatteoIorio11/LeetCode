class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        int l = 0, u = nums.size()-1, mid = 0;
        while(u >= l){
            mid = l+(u-l)/2;
            if(mid == 0 and nums[mid] > nums[mid+1]){
                return mid;
            }else if(mid == nums.size()-1 and nums[mid] > nums[mid-1]){
                return mid;
            }
            else if(nums[mid] > nums[mid+1] and nums[mid] > nums[mid-1]){
                return mid;
            }else{
                if(nums[mid] < nums[mid+1]){
                    l = mid+1;
                }else{
                    u = mid;
                }
            }
        }
        return INT_MAX;
    }
};