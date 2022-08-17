class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int l = 0, r = 0, sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 and nums[i] == nums[i-1]){
                continue;
            }else{
                l = i+1;
                r = nums.size()-1;
                while(l < nums.size() and r >= 0 and r > l){
                    sum = nums[i] + nums[l] + nums[r];
                    if(sum == 0){
                        ans.push_back({nums[i], nums[l], nums[r]});
                        while(l + 1 < nums.size() and l+1 < r and nums[l] == nums[l+1]){
                            l++;
                        }
                        l++;
                    }else if(sum > 0){
                        r--;
                    }else{
                        l++;
                    }
                }
            }
        }
        return ans;
    }
};