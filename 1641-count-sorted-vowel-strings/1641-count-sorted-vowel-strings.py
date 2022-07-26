class Solution:
    def countVowelStrings(self, n: int) -> int:
        res = [1,1,1,1,1]
        for _ in range(n-1):
            for i in range(5):
                res[i] = sum(res[i:])
            
        return sum(res)