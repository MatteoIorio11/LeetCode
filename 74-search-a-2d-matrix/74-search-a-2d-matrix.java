class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int lR = 0; 
        int lC = 0;
        int uR = matrix.length-1;
        int uC = matrix[0].length-1;
        int midC = 0;
        int midR = 0;
        for(int i = 0; i < matrix.length; i++){
            while(uC >= lC){
                midC = lC + (uC - lC)/2;
                if(matrix[i][midC] == target){
                    return true;
                }else if(matrix[i][midC] > target){
                    uC = midC-1;
                }else{
                    lC = midC+1;
                }
            }
            lC = 0;
            uC = matrix[0].length-1;
        }
        return false;
    }
}