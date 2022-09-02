class Solution {
public:
    int size = 0;
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(1001, vector<int>(1001,0));
        for(int i = 0; i <= text1.size(); i++){
            for(int j = 0; j <= text2.size(); j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }else if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[text1.length()][text2.length()];
    }
};