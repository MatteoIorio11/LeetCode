class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        
        def backtracking(indx : int, currSum : int, values : List[int]):
            
            if currSum == target:
                ans.append(list(values))
                return
            
            if currSum > target:
                return
            
            for i in range(indx, n):
                currSum+=candidates[i]
                values.append(candidates[i])
                backtracking(i, currSum, values)
                currSum-=candidates[i]
                values.pop()
            
        
        n = len(candidates)
        ans = []
        backtracking(0, 0, [])
        return ans