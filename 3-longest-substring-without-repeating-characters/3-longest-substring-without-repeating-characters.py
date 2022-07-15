class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if(len(s) == 1):return 1
        
        i = 0
        j = 1
        siz = 0
        maxVal = 0
        while i < len(s) and j <= len(s):
            sub = s[i:j]
            siz = len(sub)
            if(j < len(s) and  not (s[j] in sub)):
                j+=1
            else:
                maxVal = max(siz, maxVal)
                i+=1
                j=i+1
                
        return max(maxVal, siz)