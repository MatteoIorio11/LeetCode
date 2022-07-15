class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        
        sCount, tCount = [0]*26, [0]*26
        
        for i in range(len(s)):
            sCount[ord(s[i])-ord('a')]+=1
            tCount[ord(t[i])-ord('a')]+=1
        
        for i in range(len(sCount)):
            if(sCount[i] != tCount[i]):
                return False
        
        return True