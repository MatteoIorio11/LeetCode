class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans{};
        for(size_t i=1;i<=n;i++){
            ans = (ans+k)%i;
        }       
        return ans + 1;    
        
    }
};