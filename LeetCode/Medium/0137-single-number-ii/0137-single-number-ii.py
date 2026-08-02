class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        li = [0]*32

        for n in nums:
            for i in range(32):
                if (n >> i) & 1:
                    li[i] += 1

        res = 0        
        for i in range(len(li)):
            if li[i]%3 != 0:
                res |= 1<<i

        if (res>>31) & 1:
            res -= (1<<32)
    
        return res


