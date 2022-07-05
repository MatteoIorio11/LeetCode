class Solution {
    public int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        var sqrt = Math.sqrt(5);
        var phi1 = (1+sqrt)/2;
        var phi2 = (1-sqrt)/2;
        
        return (int) ((Math.pow(phi1, n) - Math.pow(phi2, n))/sqrt);
    }
}