class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int min_v = nums[0];
        int max_v = nums[n-1];
        vector<bool> v(nums.size(), false);
        for(int i = 1; i < n-1; i++){
            if(nums[i] > min_v){
                v[i] = true;
            }else{
                min_v = nums[i];
            }
        }
        for(int i = n-2; i >= 1; i--){
            if(nums[i] < max_v){
                if(v[i]){
                    return true;
                }
            }else{
                max_v = nums[i];
            }
        }
        
        return false;
    }
};