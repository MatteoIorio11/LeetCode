class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int min_d = INT_MAX, ind = -1;
        for(int i = 0; i < points.size(); i++){
            if(points[i][0] == x or points[i][1] == y){
                int dist = abs(x - points[i][0]) + abs(y - points[i][1]);
                if(min_d > dist){
                    min_d = dist;
                    ind = i;
                }
            }
        }
        return ind;
    }
};