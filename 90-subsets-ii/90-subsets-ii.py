class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        
        nums.sort()
        
        def backtracking(start : int, currList : List[int]):
            ans.append(currList[:])
            
            for i in range(start, n):
                if i != start and nums[i] == nums[i-1]:
                    continue
                currList.append(nums[i])
                backtracking(i+1, currList)
                currList.pop()
        
        ans = []
        n = len(nums)
        
        backtracking(0, [])


        return ans 