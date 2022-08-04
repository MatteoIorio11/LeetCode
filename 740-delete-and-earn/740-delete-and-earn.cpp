class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        map<int, int> m;
        set<int> s(nums.begin(), nums.end());
        int currEarn = 0, e1 = 0, e2 = 0, tmp = 0, prec = -1;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        
        for(int num : s){
            currEarn = m[num] * num;
            if(prec > 0 and num == prec+1){
                tmp = e2;
                e2 = max(currEarn+e1, e2);
                e1 = tmp;
            }else{
                tmp = e2;
                e2 = currEarn+e2;
                e1 = tmp;
            }
            prec = num;
        }
        return e2;
    }
};