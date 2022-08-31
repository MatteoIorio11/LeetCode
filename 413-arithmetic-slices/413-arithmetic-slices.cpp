class Solution {
public:
    int counts = 0;
    int numberOfArithmeticSlices(vector<int>& nums) {
        int diff = 0;
        for(int i = 0; i < nums.size()-1; i++){
            diff = (nums[i+1] - nums[i]);
            calcDiff(nums, i+2, diff);
        }
        return counts;
    }
    
    void calcDiff(vector<int> v, int indx, int diff){
        int size = 1;
        while(indx < v.size() and (v[indx]-v[indx-1]) == diff){
            indx++;
            counts++;
        }
    }
};