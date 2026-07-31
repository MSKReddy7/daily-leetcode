class Solution(object):
    def minimumPushes(self, word):
        """
        :type word: str
        :rtype: int
        """
        d = {}
        maxf = 0

        for i in word:
            d[i] = d.get(i,0) + 1
            if d[i] > maxf:
                maxf = d[i]
       
        count = 0
        n = 0
        for m in range(maxf,0,-1):
            for i,j in d.items():
                if j == m:
                    count += (1 if n<8 else 2 if n<16 else 3 if n<24 else 4)*j
                    n += 1

        return count

        # dlen = 0
        # count = 0
        # for i in word:
        #     if i not in d:
        #         d[i] = (1 if dlen<8 else 2 if dlen<16 else 3)
        #         dlen += 1
        # print(d)
        # for i in word:
        #     count += d[i]
        # return count