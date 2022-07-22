class Solution {
public:
    int hammingWeight(uint32_t n) {
        if(n <= 0){
            return 0;
        }else if(n % 2 == 0){
            return hammingWeight(n/2);
        }else{
            return 1+ hammingWeight(n/2);
        }
    }
};