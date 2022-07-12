class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        var l1 = 0;
        var l2 = 0;
        List<Integer> list = new LinkedList<>();
        while(l1 < nums1.length && l2 < nums2.length){
            if(nums1[l1] < nums2[l2]){
                l1++;
            }else if(nums1[l1] > nums2[l2]){
                l2++;
            }else{
                list.add(nums1[l1]);
                l1++;
                l2++;
            }
        }
        int[] arr = new int[list.size()];
        for(int i = 0; i < list.size(); i++){arr[i] = list.get(i);}
        return arr;
    }
    
}