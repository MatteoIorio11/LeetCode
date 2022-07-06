class Solution {
    public int findMin(int[] nums) {
        var l = 0;
        var u = nums.length-1;
        var mid = 0;
        var min = nums[0];
        while(u-1 > l){
            mid = l+(u-l)/2;
            if(nums[mid] < min){
                min = nums[mid];
            }
            if(nums[mid] > nums[l]){
                if(nums[mid] >= min && nums[l] < min){
                    u = mid-1;
                }else{
                    l = mid+1;
                }
            }else if(nums[mid] > nums[u]){
                if(min <= nums[mid] && min > nums[u]){
                    l = mid+1;
                }else{
                    u = mid-1;
                }
            }else{
                u = mid-1;
            }
        }
        if(nums[l] < min){min = nums[l];}
        if(nums[u] < min){min = nums[u];}
        return min;
    }
}