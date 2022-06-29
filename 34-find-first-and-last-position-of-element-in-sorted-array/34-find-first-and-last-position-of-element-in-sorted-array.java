class Solution {
    public int[] searchRange(int[] nums, int target) {
        int lowerB = 0;
        int upperB = nums.length - 1;
        int mid = lowerB + (upperB - lowerB)/2;
        while(upperB >= lowerB){
            if(nums[mid] == target){
                lowerB = mid;
                upperB = mid;
                while(lowerB >= 0 && nums[lowerB] == target){
                    lowerB--;
                }
                while(upperB < nums.length && nums[upperB] == target){
                    upperB++;
                }
                return new int[]{lowerB+1, upperB-1};
            }else if(nums[mid] > target){
                upperB = mid-1;
            }else{
                lowerB = mid+1;
            }
            mid = lowerB + (upperB - lowerB)/2;
        }
        return new int[]{-1, -1};
    }
}