
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        res = []
        if(len(nums) == 1):
            return [nums[:]]
        
        for i in range(len(nums)):
            n = nums.pop(0)
            permutations = self.permute(nums)
            
            for perm in permutations:
                perm.append(n)
            
            res.extend(permutations)
            nums.append(n)
            
        return res
