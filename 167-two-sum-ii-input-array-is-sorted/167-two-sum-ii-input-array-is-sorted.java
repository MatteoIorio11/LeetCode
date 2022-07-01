class Solution {
    public int[] twoSum(int[] numbers, int target) {
        //index 1 : i
        //index 2 : mid
        for(int i = 0; i < numbers.length;i++){
            var left = 0;
            var right = numbers.length - 1;
            var mid = 0;
            while(right >= left){
                mid = left + (right - left)/2;
                //System.out.println(numbers[mid] + numbers[i] + " i:  " + i + " m :  "+ mid );                
                if(numbers[mid] + numbers[i] == target && i < mid){
                    return new int[]{i+1, mid+1};
                }else if(numbers[mid] + numbers[i] == target){
                    left = mid+1;
                }
                else if(numbers[mid] + numbers[i] < target){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
        }

        return new int[]{-1, -1};
    }
}