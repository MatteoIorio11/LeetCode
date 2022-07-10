class Solution {
    public int searchInsert(int[] nums, int target) {
        var lowerB = 0;
        var upperB = nums.length-1;
        var mid = 0;
        while(upperB >= lowerB){
            mid = lowerB+(upperB-lowerB)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                upperB = mid-1;
            }else{
                lowerB = mid+1;
            }
        }
        return lowerB;
    }
}