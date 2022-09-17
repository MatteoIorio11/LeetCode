class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n-1 >  connections.size()){
            return -1;
        }
        vector<vector<int>> adj(n);
        for(auto v : connections){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        int components = 0;
        vector<bool> visited(n, false);
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                dfs(visited, adj, i);
                components++;
            }
        }
        return components - 1;
    }
    
    void dfs(vector<bool>& vi, vector<vector<int>>& adj, int i){
        vi[i] = true;
        for(int j  : adj[i]){
            if(!vi[j]){
                dfs(vi, adj, j);
            }
        }
    }
};