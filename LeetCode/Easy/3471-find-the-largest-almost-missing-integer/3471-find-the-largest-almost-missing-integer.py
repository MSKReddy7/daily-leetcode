class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        if len(nums) == k:
            return max(nums)
        subarr = []
        for i in range(len(nums)-k+1):
            subarr.append(nums[i:i+k])
        print(subarr)
        d = {}
        for j in subarr:
            for i in nums:
                if i in j:
                    d[i] = d.get(i,0) + 1
        print(d)
        m = -1
        for i,j in d.items():
            if j==1 and i>m:
                m = i
        
        return m
