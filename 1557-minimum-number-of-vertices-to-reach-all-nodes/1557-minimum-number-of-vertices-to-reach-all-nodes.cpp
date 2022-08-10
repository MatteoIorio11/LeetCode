class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegree(n+1);
        for(vector<int> adj : edges){
            indegree[adj[1]]++;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(indegree[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};