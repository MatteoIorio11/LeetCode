class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int max = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[0].length; j++){
                if(grid[i][j] == 1){
                    int size = dfs_visit(grid, i, j);
                    max = Math.max(max, size);
                }
            }
        }
        return max;
    }
    
    private int dfs_visit(int[][] grid, int row, int col){
        if(row < 0 || col < 0 || row >= grid.length || col >= grid[0].length || grid[row][col] == 0){
            return 0;
        }else{
            grid[row][col] = 0;
            return (1+dfs_visit(grid, row+1, col) + dfs_visit(grid, row, col+1) + 
                   dfs_visit(grid, row-1, col) + dfs_visit(grid, row, col-1));
        }
    }
}