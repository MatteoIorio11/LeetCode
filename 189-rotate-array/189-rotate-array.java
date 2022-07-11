class Solution {
    public void rotate(int[] nums, int k) {
        int[] res = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            if(i + k < nums.length){
                res[i+k] = nums[i]; 
            }else{
                var index = (i+k)%nums.length;
                res[index] = nums[i];
            }
        }
        for(int i = 0; i < nums.length; i++){
            nums[i] = res[i];
        }
    }
}