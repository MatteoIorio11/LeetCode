class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<double,pair<int,int>>, std::vector<pair<double,pair<int,int>>>,                               std::greater<pair<double,pair<int,int>>>> q;
        vector<vector<int>> ans;
        double dist = 0;
        for(int i = 0; i < points.size(); i++){
            dist = sqrt(pow((0-points[i][0]),2) + pow((0-points[i][1]),2));
            q.push({dist, {points[i][0], points[i][1]}});
        }
        for(int i = 0; i < k; i++){
            ans.push_back({q.top().second.first, q.top().second.second});
            q.pop();
        }
        return ans;
    }
};