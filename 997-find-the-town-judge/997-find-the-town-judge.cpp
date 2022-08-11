class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trusts(n+1,0);
        vector<int> votes(n+1, 0);
        for(int i = 0; i < trust.size(); i++){
            trusts[trust[i][1]]++;
            votes[trust[i][0]]++;
        }
        for(int i = 1; i <= n; i++){
            if(votes[i] == 0 and trusts[i] == n-1){
                return i;
            }
        }
        return -1;
    }
};