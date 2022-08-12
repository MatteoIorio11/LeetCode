class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> dp;
        for(int row = 0; row < numRows; row++){
            vector<int> level;
            dp.push_back(level);
            for(int col = 0; col <= row; col++){
                if(col == 0 or col == row){
                    dp[row].push_back(1);
                }else{
                    int sum = dp[row-1][col-1] + dp[row-1][col];
                    dp[row].push_back(sum);
                }
            }
        }
        return dp;
    }
};