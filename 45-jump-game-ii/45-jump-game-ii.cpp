class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps = 0, max_jump = 0, reach = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(max_jump < nums[i]+i)
                max_jump = nums[i]+i;
            if(reach == i){
                jumps++;
                reach = max_jump;
            }
        }
        return jumps;
    }
};