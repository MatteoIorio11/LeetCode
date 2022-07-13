class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        var rows = mat.length;
        var columns = mat[0].length;
        
        if((rows * columns) != (r * c)) return mat; 

        
        var row_c = 0;
        var col_c = 0;
        int[][] reshape = new int[r][c];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns ; j++){
                reshape[row_c][col_c] = mat[i][j];
                col_c++;
                if(col_c == c){
                    col_c = 0;
                    row_c++;
                }
            }
        }
        return reshape;
    }
}