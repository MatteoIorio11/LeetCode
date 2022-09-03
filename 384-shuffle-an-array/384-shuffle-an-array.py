class Solution:
    shuffle_list = []
    original = []
    def __init__(self, nums: List[int]):
        self.original = nums.copy()
        self.shuffle_list = nums.copy()

    def reset(self) -> List[int]:
        self.shuffle_list = self.original.copy()
        return self.original

    def shuffle(self) -> List[int]:
        random.shuffle(self.shuffle_list)
        return self.shuffle_list


# Your Solution object will be instantiated and called as such:
# obj = Solution(nums)
# param_1 = obj.reset()
# param_2 = obj.shuffle()