class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix[0].size()-1;
        while(l < matrix.size() and r >= 0){
            if(matrix[l][r] == target){
                return true;
            }else if(matrix[l][r] > target){
                r--;
            }else if(matrix[l][r] < target){
                l++;
            }
        }
        return false;
    }
};