class Solution {
    public int numIslands(char[][] grid) {
        var islands = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[0].length; j++){
                if(grid[i][j] == '1'){
                    dfs_visit(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
    private void dfs_visit(char[][] grid, int r, int c){
        if(grid[r][c] == '1'){
            grid[r][c] = '0';
            if(r+1 < grid.length) dfs_visit(grid, r+1, c);
            if(c+1 < grid[0].length) dfs_visit(grid, r, c+1);
            if(r >= 1) dfs_visit(grid, r-1, c);
            if(c >= 1) dfs_visit(grid, r, c-1);
        }
    }
}