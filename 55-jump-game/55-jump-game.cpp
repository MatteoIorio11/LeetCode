class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        for(int indx = 0; indx < nums.size(); indx++){
            if(reach < indx){
                return false;
            }
            reach = max(reach, indx + nums[indx]);
        }
        return true;
    }
};