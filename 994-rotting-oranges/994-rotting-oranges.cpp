class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        deque<pair<int,int>> q;
        int fresh = 0;
        int time = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(grid[i][j] == 1){
                    fresh++;
                }else if(grid[i][j] == 2){
                    q.push_back({i,j});
                }
            }
        }
        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        while(!q.empty() && fresh > 0){
            int len = q.size();
            for(int i = 0; i < len; i++){
                pair<int,int> pos = q.front();
                q.pop_front();
                for(int j = 0; j < 4; j++){
                    int new_r = pos.first+dir[j][0], new_c=pos.second+dir[j][1];
                    if(new_r < 0 || new_c < 0 || new_r >= rows || new_c >= cols ||
                      grid[new_r][new_c] != 1){
                        continue;
                    }
                    grid[new_r][new_c] = 2;
                    q.push_back({new_r, new_c});
                    fresh--;
                }
            }
            time+=1;
        }
        
        return fresh == 0 ? time : -1;
    }
};