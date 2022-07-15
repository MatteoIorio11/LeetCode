class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        islands = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == "1":
                    self.visit(grid, row, col)
                    islands+=1
                    
        
        return islands
    
    
    def visit(self, grid:List[List[str]], row:int, col:int):
        if(row < 0 or col < 0 or row >= len(grid) or col >= len(grid[0]) or grid[row][col] == "0"):
            return
        else:
            grid[row][col] = "0"
            self.visit(grid, row+1, col)
            self.visit(grid, row-1, col)
            self.visit(grid, row, col+1)
            self.visit(grid, row, col-1)
           
    