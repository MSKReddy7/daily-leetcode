import math

class Solution:
    def smallestNumber(self, n: int) -> int:
        return 2**(int(math.log2(n))+1)-1