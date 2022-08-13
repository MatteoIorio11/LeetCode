class Solution {
public:
    int maxProfit(vector<int>& prices) {
        map<pair<int,int>, int> m;
        return dfs(0, true, prices, m);
    }
    
    int dfs(int i, bool canbuy,vector<int> prices, map<pair<int,int>, int> &m){
        if(i >= prices.size()){
            return 0;
        }
        if(m.find({i, canbuy}) != m.end()){
            return m[{i, canbuy}];
        }
        
        if(canbuy){
            int buy = dfs(i+1, not canbuy, prices, m) - prices[i];
            int cooldown = dfs(i+1, canbuy, prices, m);
            m[{i, canbuy}] = max(cooldown, buy);
        }else{
            int sell = dfs(i+2, not canbuy, prices, m) + prices[i];
            int cooldown = dfs(i+1, canbuy, prices, m);
            m[{i, canbuy}] = max(sell, cooldown);
        }
        return m[{i, canbuy}];
    }
};