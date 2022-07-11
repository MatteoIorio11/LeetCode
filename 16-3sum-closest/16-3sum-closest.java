class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        var min = Integer.MAX_VALUE;
        for(int i = 0; i < nums.length; i++){
            var l = i+1;
            var r = nums.length-1;
            while(l < r){
                var sum = nums[i]+nums[l]+nums[r];
                min = Math.abs(target-sum) > Math.abs(target-min) ? min : sum;
                if(sum < target){
                    l++;
                }else if(sum > target){
                    r--;
                }else if(sum == target){
                    return target;
                }
            }
        }
        return min;
    }
}