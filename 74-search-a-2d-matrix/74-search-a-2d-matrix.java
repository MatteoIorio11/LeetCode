class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        var i = 0;
        var j = matrix[0].length-1;
        while(i < matrix.length && j >= 0){
            if(matrix[i][j] == target){
                return true;
            }else if(matrix[i][j] > target){
                j--;
            }else if(matrix[i][j] < target){
                i++;
            }
        }
        return false;
    }
}