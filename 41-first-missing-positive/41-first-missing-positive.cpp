class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int, int> presence;
        int sp = 1;
        
        for(int i = 0; i < nums.size();i++){
            presence[nums[i]] +=1;
        }
        while(presence.find(sp) != presence.end()){sp++;}
        return sp;
    }
};