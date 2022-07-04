class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Map<Integer, Integer> map1 = new HashMap<>();
        
        int[] out = new int[nums1.length];
        for(int i = 0; i < nums1.length; i++){
            if(!map1.containsKey(nums1[i])){
                map1.put(nums1[i], 1);
            }else{
                map1.put(nums1[i], map1.get(nums1[i])+1);
            }
        }
        
        int index = 0;
        int values = 0;
        for(int i = 0; i < nums2.length; i++){
            if(map1.containsKey(nums2[i]) && map1.get(nums2[i]) > 0){
                out[index++] = nums2[i];
                map1.put(nums2[i], map1.get(nums2[i])-1);
                values++;
            }
        }
        return Arrays.copyOf(out, values);
    }
    
}