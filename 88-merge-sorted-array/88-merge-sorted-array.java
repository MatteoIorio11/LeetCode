class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        //for(int i = 0; i < m; i++){System.out.println(nums1[i]);}
        for(int i = 0; i < n; i++){
            nums1[m+i] = nums2[i];
            System.out.println(nums1[m+i]);
        }
        mergeSort(nums1, 0, m+n-1);
    }
    
    private void mergeSort(int[] arr, int p, int r){
        if(p < r){
            int q =(p+r)/2;
            mergeSort(arr, p, q);
            mergeSort(arr, q+1, r);
            mergeArr(arr, p, q, r);
        }
    }
    private void mergeArr(int[] arr, int p, int q, int r){
        var n1 = q-p+1;
        var n2 = r-q;
        int L[] = new int[n1];
        int R[] = new int[n2];
        for(int i = 0; i < n1; i++){
            L[i] = arr[p+i];
        }
        for(int i = 0; i < n2; i++){
            R[i] = arr[q+i+1];
        }
        var i = 0;
        var j = 0;
        int k = p;
        while(i < n1 && j < n2){
            if(L[i] <= R[j]){
                arr[k] = L[i];
                i++;
            }else{
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
          arr[k] = L[i];
          i++;
          k++;
        }

        while (j < n2) {
          arr[k] = R[j];
          j++;
          k++;
        }
    }
}