import java.util.HashMap;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> values = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            var x = target - nums[i];
            if(values.containsKey(x)){
                return new int[]{i, values.get(x)};
            }
            values.put(nums[i], i);
        }
        return null;
    }
}