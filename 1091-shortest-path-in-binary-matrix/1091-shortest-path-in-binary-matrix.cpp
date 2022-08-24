class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1){
            return -1;
        }
        vector<pair<int,int>> adj = {{1,0}, {0, 1}, {-1,0}, {0, -1}, {1,1}, {1,-1}, {-1, -1}, {-1, 1}};
        queue<tuple<int,int, int>> q;
        int size = 0, r = 0, c = 0, len = 0, steps = 1, m = grid[0].size(), n = grid.size();
        
        q.push({0,0,1});
        grid[0][0] = 1;
        while(!q.empty()){
            auto [row, col, dist] = q.front();q.pop();
            if(row == n-1 and col == m-1){
                return dist;
            }
            for(auto [r, c] : adj){
                r+=row;
                c+=col;
                if(r >= 0 and r < n and c>= 0 and c<m and grid[r][c] == 0){
                    grid[r][c] = 1;
                    q.push({r,c,dist+1});
                }
            }
        }
        return -1;
    }
 
};