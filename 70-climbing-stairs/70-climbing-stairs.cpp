class Solution {
public:
    int climbStairs(int n) {
        double ways = 0;
        for(int i = 0; i < n && (i <= n-i); i++){
            ways+=factorial(n-i, i)/factorial(i,i);
        }
        return (int) ways;
    }
    double factorial(int n, int stop){
        if(n <= 0 or n <= 1 or stop <= 0){
            return 1;
        }
        return n*(factorial(n-1, stop-1));
    }
};