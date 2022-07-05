class Solution {
    public int fib(int n) {
        if(n == 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        int[] arr = new int[n];
        arr[0] = 0;
        arr[1] = 1;
        int f1 = 0;
        int f2 = 1;
        int f = 0;
        for(int i = 0; i < n; i+=1){
            System.out.println(i);
            f = f1+f2;
            var tmp = f1;
            f1 = f;
            f2 = tmp;
            //f+=arr[i]+arr[i+1];
            //arr[i+2] = f;
        }
        return f;
    }
}