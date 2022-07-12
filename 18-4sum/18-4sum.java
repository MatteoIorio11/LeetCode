class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        Arrays.sort(nums);
        List<List<Integer>> list = new LinkedList<>();
        for(int i = 0; i < nums.length; i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }else{
                for(int j = i+1; j < nums.length; j++){
                    if(j > i+1 && nums[j] == nums[j-1]){
                        continue;
                    }else{
                        var l = j+1;
                        var r = nums.length-1;
                        while(l < nums.length &&  r > 0 && l < r){
                            long sum = (long)nums[i]+ (long)nums[j]+ (long)nums[l]+ (long)nums[r];
                            if(sum == target){
                                list.add(List.of(nums[i], nums[j], nums[l], nums[r]));
                                l++;
                                while(l < nums.length && nums[l] == nums[l-1] && l < r){l++;}
                            }else if(sum < target){
                                l++;
                            }else{
                                r--;
                            }
                        }
                    }
                }
            }
        }
        return list;
    }
}