class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        
        def backtracking(start : int, cur_list:List[int]):
            ans.append(cur_list[:])
            
            for i in range(start, n):
                cur_list.append(nums[i])
                backtracking(i+1, cur_list)
                cur_list.pop()
        
        n = len(nums)
        ans = []
        backtracking(0, [])
        
        return ans