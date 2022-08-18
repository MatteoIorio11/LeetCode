class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<int> firstInterval, secondInterval, interval;
        vector<vector<int>> ans;
        int i = 0, j = 0, lb = 0, hb = 0;
        while(i < firstList.size() and j < secondList.size()){
            lb = max(firstList[i][0], secondList[j][0]);
            hb = min(firstList[i][1], secondList[j][1]);
            if(lb <= hb){
                ans.push_back({lb, hb});
            }
            if(firstList[i][1] < secondList[j][1]){
                i++;
            }else{
                j++;
            }
        }
        return ans;
    }
};