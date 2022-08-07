class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, profit = 0, l = 0, r = 1, n = prices.size();
        while(r < n){
            profit = prices[r]-prices[l];
            if(prices[l] >= prices[r]){
                l = r;
            }else if(prices[l] < prices[r]){
                max_profit = max(profit, max_profit);
            }
            r++;
        }
        return max_profit;
    }
};