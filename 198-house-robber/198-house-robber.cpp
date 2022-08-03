class Solution {
public:
    int rob(vector<int>& nums) {
        int money = 0, c1 = 0, c2 = 0;
        for(int i = 0; i < nums.size(); i++){
            money = max(nums[i]+c1, c2);
            c1 = c2;
            c2 = money;
        }
        return c2;
    }
};