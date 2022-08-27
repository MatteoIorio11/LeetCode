class Solution {
public:
    string w;
    int m, n;
    bool find = false;
    bool exist(vector<vector<char>>& board, string word) {
        w = word;
        m = board.size();
        n = board[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0]){
                    dfs(board, i, j, 0);
                }
            }
        }
        return find;
    }
    
    void dfs(vector<vector<char>>& b, int row, int col, int indx){
        if(indx == w.size()){
                find = true;
                return;
        }
        if(indx > w.size()){
            return;
        }
        if(b[row][col] == w[indx]){
            char c = b[row][col];
            b[row][col] = '#';
            indx++;
            if(indx == w.size()){
                find = true;
                return;
            }
            if(row >= 1){
                dfs(b, row-1, col, indx);
            }
            if(col >= 1){
                dfs(b, row, col-1, indx);
            }
            if(row < m-1){
                dfs(b, row+1, col, indx);
            }
            if(col < n-1){
                dfs(b, row, col+1, indx);
            }
            b[row][col] = c;
        }
    }
};