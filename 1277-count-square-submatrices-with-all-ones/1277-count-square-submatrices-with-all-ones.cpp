class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        int sum = 0;
        int max_val = 0;
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 1){
                    max_val = 1;
                    if(i > 0 and j > 0){
                        max_val =1 + min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
                    }
                    sum += max_val;
                    dp[i][j] = max_val;
                }
            }
        }
        return sum;
    }
};