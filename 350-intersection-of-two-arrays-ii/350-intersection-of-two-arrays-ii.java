class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        var l = 0;
        var r = 0;
        Map<Integer, Integer> map = new HashMap<>();
        List<Integer> out = new LinkedList<>();//int[nums1.length > nums2.length ? nums2.length : nums1.length];
        for(int i = 0; i < nums1.length ; i++){
            map.merge(nums1[i], 1, (x,y) -> x+y);
        }
        for(int i = 0; i < nums2.length; i++){
            if(map.containsKey(nums2[i])){
                out.add(nums2[i]);
                map.merge(nums2[i], 1, (x, y) -> x-y);
                if(map.get(nums2[i]) == 0){map.remove(nums2[i]);}
            }
        }
        int[] arr = new int[out.size()];
        for(int i = 0; i < out.size(); i++){
            arr[i] = out.get(i);
        }
        return arr;
    }
    
}