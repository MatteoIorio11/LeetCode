class Solution {
    public int search(int[] nums, int target) {
        var l = 0;
        var u = nums.length -1;
        var mid = 0;
        while(u-1 > l){
            mid = l+(u-l)/2;
            if(nums[mid] == target){return mid;}
            if(nums[mid] > nums[l]){
                if(target >= nums[l] && target < nums[mid]){
                    u = mid-1;
                }else{
                    l = mid+1;
                }
            }else{ 
                if(nums[mid] < nums[u]){
                    if(target > nums[mid] && target <= nums[u]){
                        l = mid+1;
                    }else{
                        u = mid-1;
                    }
                }
            }
        }
        if(nums[l] == target){return l;}
        if(nums[u] == target){return u;}
        return -1;
    }
}