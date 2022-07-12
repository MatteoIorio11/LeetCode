class Solution {
    public int maxProfit(int[] prices) {
        int l = 0;
        int r = 1;
        int maxP = 0;
        while(r < prices.length){
            var profit = prices[r] - prices[l];
            if(prices[l] >= prices[r]){
                l = r;
            }else if(prices[l] < prices[r]){
                maxP = Math.max(maxP, profit);
            }
            r++;
        }
        return maxP;
    }
}