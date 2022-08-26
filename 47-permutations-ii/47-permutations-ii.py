class Solution:
    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        
        def backtracking(comb, counter):
            
            if(len(comb) == n):
                ans.append(list(comb))
                return
           
            for num in counter:
                if counter[num] > 0:
                    comb.append(num)
                    counter[num]-=1
                    backtracking(comb, counter)
                    comb.pop()
                    counter[num]+=1
        
        ans = []
        n = len(nums)
        backtracking([], Counter(nums))
        
        return ans