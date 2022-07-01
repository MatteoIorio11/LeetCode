import java.util.Arrays;
class Solution {
    public int specialArray(int[] nums) {
        var sum = 0;
        Arrays.sort(nums);
        for(int i = 1; i <= nums[nums.length-1];i++){
            sum = 0;
            for(int j = 0; j < nums.length; j++){
                if(nums[j] >= i){
                    sum++;
                }
            }
            if(sum == i){
                return i;
            }
        }
        return -1;
    }
}