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
    private void mergeArr(int[] array, int p, int q, int r){
        int n1 = q - p + 1;
        int n2 = r - q;

        int L[] = new int[n1];
        int M[] = new int[n2];

        // fill the left and right array
        for (int i = 0; i < n1; i++)
          L[i] = array[p + i];
        for (int j = 0; j < n2; j++)
          M[j] = array[q + 1 + j];

        // Maintain current index of sub-arrays and main array
        int i, j, k;
        i = 0;
        j = 0;
        k = p;

        // Until we reach either end of either L or M, pick larger among
        // elements L and M and place them in the correct position at A[p..r]
        // for sorting in descending
        // use if(L[i] >= <[j])
        while (i < n1 && j < n2) {
          if (L[i] <= M[j]) {
            array[k] = L[i];
            i++;
          } else {
            array[k] = M[j];
            j++;
          }
          k++;
        }

        // When we run out of elements in either L or M,
        // pick up the remaining elements and put in A[p..r]
        while (i < n1) {
          array[k] = L[i];
          i++;
          k++;
        }

        while (j < n2) {
          array[k] = M[j];
          j++;
          k++;
        }
    }
}