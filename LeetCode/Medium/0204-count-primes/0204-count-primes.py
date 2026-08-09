class Solution(object):
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if(n<=1): 
            return 0

        box = [True] * n
        box[0],box[1] = False,False

        for i in range(2,int(n**0.5)+1):
            if box[i]:
                for j in range(i*i,n,i):
                    box[j] = False

        return sum(box)
       