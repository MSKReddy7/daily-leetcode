import math

class Solution(object):
    def evenOddBit(self, n):
        """
        :type n: int
        :rtype: Lit[int]
        """
        li = [0,0]
        i = 0
        while i<31:
            li[i%2] += 1 if n&(1<<i) else 0
            i+=1
        return li