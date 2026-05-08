class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        s = set(nums)
        a = []
        for k in s:
            a.append(nums.count(k))
        m = max(a)
        n = a.count(m)
        return m * n
