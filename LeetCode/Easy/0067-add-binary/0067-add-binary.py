class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        r = ''

        pa = len(a)-1
        pb = len(b)-1
        carry = 0
        while pa>=0 or pb>=0 or carry==1:
            sum = 0 
            sum += carry
            if pa>=0:
                sum += ord(a[pa]) - ord('0')
                pa -= 1
            if pb>=0:
                sum += ord(b[pb]) - ord('0')
                pb -= 1
            carry = sum//2
            sum = sum%2

            r = chr(sum+ord('0')) + r

        return r