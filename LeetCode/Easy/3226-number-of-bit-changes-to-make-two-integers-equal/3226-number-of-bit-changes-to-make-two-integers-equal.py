import math

class Solution:
    def minChanges(self, n: int, k: int) -> int:
        if n==k:
            return 0
        
        i = 0
        changes = 0
        for i in range(int(math.log2(max(n,k)) + 1)):
            if n&(1<<i)==0 and k&(1<<i):
                return -1
            if n & (1<<i) == k&(1<<i):
                continue
            n ^= (1<<i)
            changes += 1
        return changes