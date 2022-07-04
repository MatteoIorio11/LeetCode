class Solution {
    public int arrangeCoins(int n) {
        if(n == 1){
            return 1;
        }
        var leftCoins = n;
        int cont = 0;
        int k = 0;
        for(int i = 0; i < n && leftCoins > 0; i++){
            leftCoins -= i;
            if(leftCoins >= 0){cont++;}
        }
        return cont-1;
    }
}