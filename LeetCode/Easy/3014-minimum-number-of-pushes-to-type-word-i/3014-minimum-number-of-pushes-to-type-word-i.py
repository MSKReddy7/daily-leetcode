class Solution(object):
    def minimumPushes(self, word):
        """
        :type word: str
        :rtype: int
        """
        t = len(word)
        i = 1
        c = 0
        while t>0:
            c+=(8 if t>8 else t)*i
            t-=8
            i+=1
        return c