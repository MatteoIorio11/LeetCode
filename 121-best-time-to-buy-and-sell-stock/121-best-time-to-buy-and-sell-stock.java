class Solution {
    public int maxProfit(int[] prices) {
        int right = 1;
        int left = 0;
        int max = 0;
        var profit = 0;
        while(right < prices.length){
            profit = prices[right] - prices[left];
            if(prices[left] >= prices[right]){
                left = right;
            }else if(prices[left] < prices[right]){
                max = max < profit ? profit : max;
            }
            right = right + 1;
        }
        return max;
    }
}