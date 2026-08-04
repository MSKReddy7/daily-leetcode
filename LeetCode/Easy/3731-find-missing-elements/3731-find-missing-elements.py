class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        li = []
        m,mi = max(nums),min(nums)
        for i in range(mi,m+1):
            if i not in nums:
                li.append(i)
        return li