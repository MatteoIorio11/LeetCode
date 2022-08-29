class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
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
            if(i < g.size()-1){
                dfs(g, i+1, j);
            }
            if(j < g[0].size()-1){
                dfs(g, i, j+1);
            }
        }
    }
};