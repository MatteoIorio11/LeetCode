class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> v;
        dfs(graph, 0, v);
        return ans;
    }
    
    void dfs(vector<vector<int>>& g, int n, vector<int> visited){
        if(n == g.size()-1){
            visited.push_back(n);
            ans.push_back(visited);
        }else{
            for(int j = 0; j < g[n].size(); j++){
                visited.push_back(n);
                dfs(g, g[n][j], visited);
                visited.pop_back();
            }
        }
    }
};