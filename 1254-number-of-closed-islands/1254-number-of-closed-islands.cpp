class Solution {
public:
    int m = 0, n = 0;
    int flag = 1;
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int islands= 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0){
                    flag = 1;
                    dfs_visit(grid, i, j);
                    islands+=flag;
                }
            }
        }
        return islands;
    }
    
    void dfs_visit(vector<vector<int>>&g, int row, int col){
        if(row < 0 || col < 0 || col > n-1 || row > m-1){
            flag= 0;
            return;
        }
        if(g[row][col] == 1) return;
        g[row][col] = 1;
        dfs_visit(g,row,col+1);
        dfs_visit(g,row+1,col);
        dfs_visit(g,row-1,col);
        dfs_visit(g,row,col-1);
    }
};