class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        msum = -inf
        sum = 0
        for i in nums:
            sum += i
            msum = max(sum,msum)
            if sum<0:
                sum=0
        return msum


