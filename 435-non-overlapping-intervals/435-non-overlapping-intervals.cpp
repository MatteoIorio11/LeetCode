class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int skip = 0;
        int min_v = intervals[0][1];
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] >= min_v){
                min_v = intervals[i][1];
            }else{
                 skip++;
                min_v  = min(intervals[i][1], min_v);
            }
        } 
        return skip;
    }
};