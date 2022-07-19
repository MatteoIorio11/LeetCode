class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.empty() && n == 1){
            return 1;
        }else if(trust.empty() && n > 1){
            return -1;
        }
        map<int, int> mapTrust;
        map<int, int> mapEle;
        int rows = trust.size();
        int cols = trust[0].size();
        for(int i = 0; i < n; i++){
            mapTrust[i] = 0;
            mapEle[i] = 0;
        }
        for(int i = 0; i < rows; i++){
            mapTrust[trust[i][1]] +=1;
            mapEle[trust[i][0]] +=1;
        }
        for(auto it = mapTrust.begin(); it != mapTrust.end(); it++){
            if(it->second == n-1 && mapEle[it->first] == 0){
                return it->first;
            }
        }
        return -1;
    }
};