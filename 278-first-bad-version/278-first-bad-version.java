/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        var lowerB = 1;
        var upperB = n;
        var mid = lowerB + (upperB-lowerB)/2;
        var val = mid;
        if(n == 1 && isBadVersion(1)){
            return 1;
        }
        while(upperB >= lowerB){
            if(isBadVersion(mid)){
                upperB = mid-1;
                val = mid;
            }else{
                lowerB = mid+1;
            }
            mid = lowerB + (upperB-lowerB)/2;
        }
        return val;
    }
}