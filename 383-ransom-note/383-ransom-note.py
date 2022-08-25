class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if(len(ransomNote) > len(magazine)):
            return False
        
        ranCont, magCont = [0]*26, [0]*26
        
        for i in range(len(ransomNote)):
            ranCont[ord(ransomNote[i]) - ord('a')]+=1
        
        for i in range(len(magazine)):
            magCont[ord(magazine[i]) - ord('a')]+=1
        
        
        match = 0
        for i in range(26):
            if ranCont[i] <= magCont[i]:
                match +=ranCont[i]
                
        return match == len(ransomNote)