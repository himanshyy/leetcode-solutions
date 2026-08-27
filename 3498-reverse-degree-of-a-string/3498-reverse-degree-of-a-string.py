class Solution(object):
    def reverseDegree(self, s):
        """
        :type s: str
        :rtype: int
        """
        sums=0
        for i in range(len(s)):
            rev=ord('z')-ord(s[i])+1
            sums+=rev*(i+1)
        return sums    

        