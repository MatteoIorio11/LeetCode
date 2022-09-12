class Solution {
public:
    int m = 0, n = 0;
    int numEnclaves(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int num = 0;
        
        for(int i = 0; i < m; i++){
            if(i == 0 or i == m-1){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 1){
                        dfs(grid, i, j);
                    }
                }
            }else{
                if(grid[i][0] == 1){
                    dfs(grid, i,0);
                }
                if(grid[i][n-1] == 1){
                    dfs(grid, i, n-1);
                }
            }
        }
        
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 1){
                    num++;
                }
            }
        }
        return num;
    }
    void dfs(vector<vector<int>>& g, int row, int col){
        if(row < 0 or col < 0 or row >= m or col >= n or g[row][col] == 0){
            return;
        }else{
            g[row][col] = 0;
            dfs(g, row+1, col);
            dfs(g, row-1, col);
            dfs(g, row, col+1);
            dfs(g, row, col-1);
        }
        
    }
};