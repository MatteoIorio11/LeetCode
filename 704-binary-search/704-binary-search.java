import java.util.Arrays;
class Solution {
    public int search(int[] nums, int target) {
        var l = 0;
        var u = nums.length -1;
        var mid = 0;
        while(u >= l){
            mid = l+(u-l)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                u = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
}