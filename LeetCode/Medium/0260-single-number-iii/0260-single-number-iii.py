class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        if len(nums) ==2:
            return nums

        xor = 0
        for i in nums:
            xor ^= i

        a,b = 0,0
        pos = 0

        pos = 0
        while True:
            if (xor>>pos) & 1:
                break
            pos+=1
        
        for i in nums:
            if (i>>pos) & 1:
                a ^= i
                continue
            b ^= i

        

        return [a,b]
                
