class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }else{
                int l = i+1;
                int r = nums.size()-1;
                while(l < r){
                    int sum_v = nums[i]+nums[l]+nums[r];
                    if(sum_v > 0){
                        r--;
                    }else if(sum_v < 0){
                        l++;
                    }else{
                        ans.push_back({nums[i], nums[l], nums[r]});
                        l++;
                        while(nums[l-1] == nums[l] and l < r){l++;}
                    }
                }
            }
        }
        return ans;
    }
};