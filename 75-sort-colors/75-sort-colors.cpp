class Solution {
public:
    void sortColors(vector<int>& nums) {
        mergesort(nums, 0, nums.size()-1);
    }
    void mergesort(vector<int>& nums, int s, int e){
        if(s < e){
            int q = s+(e-s)/2;
            mergesort(nums, s, q);
            mergesort(nums, q+1, e);
            merge(nums, s, q, e);
        }
    }
    void merge(vector<int>& array, int const left, int const mid, int const right){
        auto const subArrayOne = mid - left + 1;
        auto const subArrayTwo = right - mid;

        // Create temp arrays
        auto *leftArray = new int[subArrayOne],
             *rightArray = new int[subArrayTwo];

        // Copy data to temp arrays leftArray[] and rightArray[]
        for (auto i = 0; i < subArrayOne; i++)
            leftArray[i] = array[left + i];
        for (auto j = 0; j < subArrayTwo; j++)
            rightArray[j] = array[mid + 1 + j];

        auto indexOfSubArrayOne
            = 0, // Initial index of first sub-array
            indexOfSubArrayTwo
            = 0; // Initial index of second sub-array
        int indexOfMergedArray
            = left; // Initial index of merged array

        // Merge the temp arrays back into array[left..right]
        while (indexOfSubArrayOne < subArrayOne
               && indexOfSubArrayTwo < subArrayTwo) {
            if (leftArray[indexOfSubArrayOne]
                <= rightArray[indexOfSubArrayTwo]) {
                array[indexOfMergedArray]
                    = leftArray[indexOfSubArrayOne];
                indexOfSubArrayOne++;
            }
            else {
                array[indexOfMergedArray]
                    = rightArray[indexOfSubArrayTwo];
                indexOfSubArrayTwo++;
            }
            indexOfMergedArray++;
        }
        // Copy the remaining elements of
        // left[], if there are any
        while (indexOfSubArrayOne < subArrayOne) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
            indexOfMergedArray++;
        }
        // Copy the remaining elements of
        // right[], if there are any
        while (indexOfSubArrayTwo < subArrayTwo) {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
            indexOfMergedArray++;
        }
        delete[] leftArray;
        delete[] rightArray;
        }
};