class Solution {
public:
    int subtractProductAndSum(int n) {
        int size = log10(n), prod = 1, sum = 0, ten = pow(10, size);
        while (n != 0) {
            prod*=(n % 10);
            sum+=(n % 10);
           n /= 10;
        }
        return prod-sum;
    }
};