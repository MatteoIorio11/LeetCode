class Solution {
    public int maxDistance(int[] nums1, int[] nums2) {
        int dist = 0;
        for(int i = 0; i < nums1.length; i++){
            var j = bs(nums2, nums1[i]);
            //System.out.println(i + " " + j);
            if(j >= i){
                dist = Math.max(dist, j-i);   
            }
        }
        return dist;
    }
    private int bs(int[] nums2, int target){
        var l = 0; 
        var u = nums2.length-1;
        var mid = 0;
        var j = -1;
        while(l <= u){
            mid = l+(u-l)/2;
            if(nums2[mid] < target){
                u = mid-1;
            }else if(nums2[mid] >=target){
                j = mid;
                l = mid+1;
            }   
        }
        return j;
    }
}