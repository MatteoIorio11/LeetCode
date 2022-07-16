class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        if image[sr][sc] == color: return image
        self.change(image, sr, sc, image[sr][sc], color)
        return image
    
    
    def change(self, image:List[List[int]], row:int, col:int, color:int, newcolor:int):
        if  image[row][col] == color:
            image[row][col] = newcolor
            if row+1 < len(image): 
                self.change(image, row+1, col, color,  newcolor)
            if col+1 < len(image[0]) : 
                self.change(image, row, col+1, color, newcolor)
            if row >= 1 : 
                self.change(image, row-1, col, color, newcolor)
            if col >= 1 : 
                self.change(image, row, col-1, color, newcolor)
    
            