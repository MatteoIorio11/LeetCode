class Solution {
    public void moveZeroes(int[] nums) {
        var l = 0;
        var r = 0;
        while(l < nums.length && r < nums.length){
            if(nums[l] == 0){
                while(r < nums.length && nums[r] == 0 ){r++;}
                if(r >= nums.length){break;}
                var tmp = nums[r];
                nums[r] = nums[l];
                nums[l] = tmp;
            }
            l++;
            r++;
        }
    }
}