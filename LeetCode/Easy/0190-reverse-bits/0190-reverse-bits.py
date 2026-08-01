class Solution:
    def reverseBits(self, n: int) -> int:
        res = 0
        i = 0
        while i<16:
            res |= (((n>>i) & 1) << (31-i)) | (((n>>(31-i) & 1))<<i)
            i+=1
        return res