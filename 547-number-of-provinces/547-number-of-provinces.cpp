class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int province = 0;
        for(int i = 0; i < isConnected.size(); i++){
            for(int j = 0; j < isConnected.size(); j++){
                if(isConnected[i][j]==1){
                    dfs(isConnected, i);
                    province++;
                }
            }
        }
        return province;
    }
    
    void dfs(vector<vector<int>>& v,int row){
        for(int j = 0; j < v.size(); j++){
            if(v[row][j] == 1){
                v[row][j] = 0;
                dfs(v, j);
            }
        }
    }
};