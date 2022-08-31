class Solution {
public:
    int counts = 0;
    int numberOfArithmeticSlices(vector<int>& nums) {
        int diff = 0;
        for(int i = 0; i < nums.size()-1; i++){
            diff = (nums[i+1] - nums[i]);
            for(int j = i+2; j < nums.size(); j++){
                if(nums[j]-nums[j-1] == diff){
                    counts++;
                }else{
                    break;
                }
            }
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