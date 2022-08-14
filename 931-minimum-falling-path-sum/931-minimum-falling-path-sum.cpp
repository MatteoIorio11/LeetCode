class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size()-2, min_v = INT_MAX;
        for(int row = n; row >= 0; row--){
            for(int col = 0; col < matrix.size(); col++){
                if(col == 0){
                    matrix[row][col] += min(matrix[row+1][col], matrix[row+1][col+1]);
                }else if(col == matrix.size()-1){
                    matrix[row][col] += min(matrix[row+1][col], matrix[row+1][col-1]);
                }else{
                    matrix[row][col] += min(matrix[row+1][col], min(matrix[row+1][col-1], matrix[row+1][col+1]));
                }
            }
        }
        for(int i = 0 ; i < matrix.size(); i++){
            min_v = min(min_v, matrix[0][i]);
        }
        return min_v;
    }
};