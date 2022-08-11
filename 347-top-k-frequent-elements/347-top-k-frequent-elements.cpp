class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if(nums.size() == 1){
            return {nums[0]};
        }
        priority_queue<pair<int,int>> q;
        sort(nums.begin(), nums.end());
        vector<int> ans(0);
        int freq = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                freq++;
            }else {
                q.push({freq, nums[i-1]});
                freq = 1;
            }
        }
        q.push({freq, nums[nums.size()-1]});
        for(int i = 0; i < k and !q.empty(); i++){
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};