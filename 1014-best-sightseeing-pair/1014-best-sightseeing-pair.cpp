class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int size = values.size(), max_val = values[0], res = 0;
        for(int i = 1; i < values.size(); i++){
            res = max(res, max_val+values[i]-i);
            max_val = max(max_val, values[i]+i);
        }
        return res;
    }
};