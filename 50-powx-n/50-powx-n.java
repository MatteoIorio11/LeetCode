class Solution {
    public double myPow(double x, int n) {
        if(n == 0)
            return 1;
        else{
            double res = myPow(x, n/2);
            if(n % 2 < 0) //case of decimal fraction
                return res * res / x;
            else if(n % 2 > 0) //case for odd value
                return res * res * x;
            else
                return res * res; //case for even value
        }
    }
}