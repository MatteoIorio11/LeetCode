class Solution {
    public int findKthPositive(int[] arr, int k) {
        var cont = 1;
        while(k > 0){
            if(binarySearch(arr, cont) < 0){k--;}
            cont++;
        }
        return cont-1;
    }
    private int binarySearch(int[] arr, int target){
        var l = 0;
        var u = arr.length-1;
        var mid = 0;
        while(u >= l){
            mid = l+(u-l)/2;
            if(arr[mid] == target){
                return mid;
            }else if(arr[mid] > target){
                u = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
}