class Solution:
    def count(self,n):
        c = 0
        while n:
            if n&1:
                c+=1
            n>>=1
        return c

    def countBits(self, n: int) -> List[int]:
        li = []
        for i in range(n+1):
            li.append(self.count(i))
        return li