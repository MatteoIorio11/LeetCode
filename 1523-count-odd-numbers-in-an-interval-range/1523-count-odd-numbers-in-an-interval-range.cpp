class Solution {
public:
    int countOdds(int low, int high) {
        return (high) % 2 == 0 and low%2 == 0 ? (high-low)/2 : ((high-low)/2) + 1;
    }
};