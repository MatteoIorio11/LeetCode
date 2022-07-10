import java.util.List;
import java.util.LinkedList;
import java.util.HashMap;
import java.util.Arrays;
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> out = new LinkedList<>();

        Arrays.sort(nums);
        for(int start = 0; start < nums.length ; start++){
            if(start > 0 && nums[start] == nums[start-1]){
                continue; 
            }else{
                var l = start+1;
                var r = nums.length-1;
                while(r > l){
                    var sum = nums[start] + nums[r] + nums[l];
                    if(sum > 0){
                        r--;
                    }else if(sum < 0){
                        l++;
                    }else{
                        out.add(List.of(nums[start], nums[r], nums[l]));
                        l++;
                        while(nums[l] == nums[l-1] && l < r){l++;}
                    }
                }
            }
        }
        return out;
    }
}