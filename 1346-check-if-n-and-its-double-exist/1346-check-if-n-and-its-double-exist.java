class Solution {
    public boolean checkIfExist(int[] arr) {
        var l = 0;
        var u = arr.length-1;
        var mid = 0;
        Arrays.sort(arr);
        for(int i = 0; i < arr.length; i++){
            var doub = arr[i]*2;
            while(u >= l){
                mid = l+(u-l)/2;
                if(arr[mid] == doub && i != mid){
                    System.out.println(doub);
                    return true;
                }else if(arr[mid] > doub){
                    u = mid-1;
                }else{
                    l = mid+1;
                }
            }
            l = 0;
            u = arr.length-1;
        }
        return false;
    }
}