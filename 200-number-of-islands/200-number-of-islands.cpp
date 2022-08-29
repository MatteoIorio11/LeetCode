class Solution {
public:
    int n, m;
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        m = grid.size();
        n  = grid[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
    
    void dfs(vector<vector<char>>& g, int i, int j){
        if(g[i][j] == '1'){
            g[i][j] = '0';
            if(i >= 1){
                dfs(g, i-1, j);
            }
            if(j >= 1){
                dfs(g, i, j-1);
            }
            if(i < m-1){
                dfs(g, i+1, j);
            }
            if(j < n-1){
                dfs(g, i, j+1);
            }
        }
    }
};