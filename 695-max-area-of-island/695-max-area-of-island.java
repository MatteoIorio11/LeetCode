class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        maxVal = 0;
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    maxVal = max(self.visit(grid, i, j), maxVal)
                    
        return maxVal
    
    def visit(self, grid:List[List[int]], row:int , col: int) -> int:
        if row < 0 or col < 0 or row >= len(grid) or col >= len(grid[0]) or grid[row][col] == 0:
            return 0
        else:
            grid[row][col] = 0
            return (1+self.visit(grid, row+1, col) + self.visit(grid, row, col+1) + self.visit(grid, row-1, col) + self.visit(grid, row, col-1))