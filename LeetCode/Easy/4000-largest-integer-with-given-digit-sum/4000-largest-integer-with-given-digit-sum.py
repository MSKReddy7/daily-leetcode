class Solution:
    def largestInteger(self, n: int, s: int) -> int:    
        if not n:
            return n

        if s > 9*n:
            return -1

        res = ''
        while s:
            if s>9:
                res += '9'
                s-=9
            else:
                res += str(s)
                s=0
        
        return int(res) if len(res)==n else int(res + '0'*(n-len(res)))

        
        