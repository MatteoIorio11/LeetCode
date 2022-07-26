class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size()-1;
        int i = 0;
        int j = 0;
        queue<int> q;
        for(i = 0; i <= n; i++){
            for(j = 0; j <= n; j++){
                q.push(matrix[i][j]);
            }
        }
        i = 0;
        j = n;
        while(!q.empty()){
            for(i = 0; i <= n; i++){
                matrix[i][j] = q.front();
                q.pop();
            }
            j = j-1;
        }
    }
};