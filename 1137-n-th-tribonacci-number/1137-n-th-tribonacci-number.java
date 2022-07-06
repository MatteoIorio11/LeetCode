class Solution {
    public int tribonacci(int n) {
        var t0 = 0;
        var t1 = 1;
        var t2 = 1;
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 1;
        }
        var out = 0;
        for(int i = 2; i < n; i++){
            out = t0+t1+t2;
            t0 = t1;
            t1 = t2;
            t2 = out;
        }
        return out;
    }
}