/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        var l = 0;
        var u = n;
        var mid = 0;
        var first = 0;
        while(u >= l){
            mid = l+(u-l)/2;
            if(isBadVersion(mid)){
                first = mid;
                u = mid-1;
            }else{
                l = mid+1;
            }
        }
        return first;
    }
}