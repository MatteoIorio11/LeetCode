class Solution:
    def firstUniqChar(self, s: str) -> int:
        if(len(s) == 1):return 0
        
        sCount = [0]*26
        
        for i in range(len(s)):
            sCount[ord(s[i]) - ord('a')]+=1
        
        for i in range(len(s)):
            if(sCount[ord(s[i]) - ord('a')] == 1):
                return i
        
        return -1