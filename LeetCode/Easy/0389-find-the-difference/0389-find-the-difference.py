class Solution(object):
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        res  = 0

        for i in range(len(s)):
            res ^= ord(s[i]) ^ ord(t[i])

        res ^= ord(t[-1])
        
        return chr(res)
        