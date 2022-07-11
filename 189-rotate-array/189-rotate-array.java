class Solution {
    public void rotate(int[] nums, int k) {
        k = k%nums.length;
        var l = 0;
        var r = nums.length-1;
        while(l < r){
            var tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
        l = 0;
        r = k-1;
        while(l < r){
            var tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
        l = k;
        r = nums.length-1;
        while(l < r){
            var tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l++;
            r--;
        }
    }
}