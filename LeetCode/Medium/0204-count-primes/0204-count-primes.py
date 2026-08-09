import math

class Solution(object):
    def create(self, n):
        self.box = [True] * n
        self.box[0],self.box[1] = False,False

        for i in range(2,int(n**0.5+1)):
            if self.box[i]:
                for j in range(i*i,n,i):
                    self.box[j] = False

    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if(n<=1): 
            return 0

        self.create(n)

        return sum(self.box)
       