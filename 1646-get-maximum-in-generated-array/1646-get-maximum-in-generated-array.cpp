class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0) {
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;
        int max_v = INT_MIN;
        for(int i = 0; i <= n; i++){
            if(2 <= 2*i && 2*i <= n){
                nums[2*i]=nums[i];
                max_v = max(max_v, nums[2*i]);
            }
            if(2 <= 2*i +1 && 2*i+1 <= n){
                nums[2*i +1] = nums[i]+nums[i+1];
                max_v = max(max_v, nums[2*i +1]);
            }
        }
        return max_v;
    }
};