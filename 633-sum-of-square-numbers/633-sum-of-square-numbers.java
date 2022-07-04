class Solution {
    public boolean judgeSquareSum(int c) {
        for(int i = 0; i <= c; i++){
            var value = c-(i*i);
            if(value >= 0){ 
                var val = findPow(value);
                if(val >= 0){
                    return true;
                }
            }else{
                return false;
            }
        }
        return false;
    }
    
    private long findPow(int value){
        long l = 0;
        long u = Integer.MAX_VALUE-1;
        long mid = 0;
        long result = 0;
        while(u >= l){
            mid = l+(u-l)/2;
            result = mid*mid;
            if(result == value){
                return mid;
            }else if(result > value){
                u = mid-1;
            }else {
                l = mid+1;
            }
        }
        return -1;
    }
        
}