class Solution {
    public int countNegatives(int[][] grid) {
        var lowerB = 0;
        var upperB = grid[0].length-1;
        var sum = 0;
        var mid = 0;
        for(int i = 0; i < grid.length; i++){
            while(upperB >= lowerB){
                if(grid[i][lowerB] < 0 && lowerB == 0){
                    sum+=(upperB-lowerB)+1;
                    break;
                }
                mid = lowerB + (upperB-lowerB)/2;
                if(grid[i][mid] >= 0){
                    lowerB = mid+1;
                }else if(grid[i][mid] < 0){
                    lowerB = mid;
                    while(lowerB > 0 && grid[i][lowerB] < 0){
                        sum++;
                        lowerB--;
                    }
                    lowerB = mid;
                    sum+=(upperB-lowerB);
                    break;
                }
            }
            lowerB = 0;
            upperB = grid[0].length-1;
            mid = 0;
        }
        return sum;
    }
}