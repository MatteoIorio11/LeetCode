class Solution {
    public int climbStairs(int n) {
        double cont = 1; // all ones
        for(int i = 1; i < n && (n-i) >= i; i++){
            System.out.println(i);
            cont+=(factorial(n-i, i)/factorial(i,i));
        }
        return (int)cont;
    }
    
    private double factorial(long n, int stop){
        if(n == 0 || stop <= 0){
            return 1;
        }
        if(n == 1 || stop <= 0){
            return 1;
        }
        return n*factorial(n-1, stop-1);
    }
}