class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int> res(n,1);

        for(int i=0,preSum = 1,suffSum = 1;i<n;i++){

            res[i] *= preSum;
            preSum *= nums[i];
            res[n-i-1] *= suffSum;
            suffSum *= nums[n-i-1];
        }
        return res;
    }
};