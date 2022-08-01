class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> map_s(m, vector<int>(n));
        for(int i = m-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                if(i == m-1){
                    map_s[i][j] = 1;
                }
                else if(j == n-1){
                    map_s[i][j] = 1;
                }else{
                    map_s[i][j] = map_s[i][j+1] + map_s[i+1][j];
                }
                
            }
        }
        return map_s[0][0];
    }
};