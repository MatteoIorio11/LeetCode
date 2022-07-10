class Solution {
    public int maxSubArray(int[] nums) {
        int max = nums[0];
        int sum = 0;
        for(var num : nums){
            if(sum < 0){sum = 0;}
            sum+=num;
            max = Math.max(max, sum);
        }
        return max;
    }
}