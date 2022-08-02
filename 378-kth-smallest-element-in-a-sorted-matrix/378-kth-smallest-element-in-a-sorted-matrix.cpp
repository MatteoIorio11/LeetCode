class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int i = matrix[0][0], j = matrix[n-1][n-1], mid = 0;
        while(i < j){
            mid =  i + (j-i)/2;
            int s = bs(matrix, mid);
            if(s < k){
                i = mid + 1;
            }else{
                j = mid;
            }
        }
        return i;
    }
    int bs(vector<vector<int>> m, int mid){
        int n = m.size();
        int i = n-1, j = 0;
        int count = 0;
        while(i >= 0 and j < n){
            if(m[i][j] > mid){
                i--;
            }else{
                count += (i+1);
                j++;
            }
        }
        return count;
    }
};