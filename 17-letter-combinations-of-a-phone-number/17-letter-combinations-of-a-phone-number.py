class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        
        if not digits:
            return []
        
        keyboard = {}
        keyboard['2'] ="abc"
        keyboard['3'] ="def"
        keyboard['4'] ="ghi"
        keyboard['5'] ="jkl"
        keyboard['6'] ="mno"
        keyboard['7'] ="pqrs"
        keyboard['8'] ="tuv"
        keyboard['9'] ="wxyz"
        
        def backtracking(comb : str, indx : int):
            if len(comb) == n:
                ans.append(comb)
                return
            if indx > len(digits):
                return
            
            for word in keyboard[digits[indx]]:
                for letter in word:
                    comb+=letter
                    backtracking(comb, indx+1)
                    comb = comb[:-1]
                
            
        
        n = len(digits)
        ans = []
        backtracking("", 0)
        return ans