class Solution {
public:
    set<int> terminals;
    set<int> nodes;
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0);
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            if(dfs_visit(graph, i, color)){
                ans.push_back(i);
            }
        }
        
        return ans;
    }
    
    bool dfs_visit(vector<vector<int>> &g, int src, vector<int>& v){
        if(v[src] > 0){
            return v[src] == 2;
        }
        v[src] = 1;
        for(int adj : g[src]){
            if(v[src] == 2){
                continue;
            }
            if(v[adj] == 1 or !dfs_visit(g, adj, v)){
                return false;
            }
        }
        v[src] = 2;
        return true;
    }
};