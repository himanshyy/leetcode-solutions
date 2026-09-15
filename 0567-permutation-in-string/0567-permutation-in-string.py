class Solution(object):
    def checkInclusion(self, s1, s2):
        """
        :type s1: str
        :type s2: str
        :rtype: bool
        """
        n=len(s1)
        sort=sorted(s1)
        for right in range(len(s2)-len(s1)+1):
            window=s2[right:right+n]
            if sorted(window)==sort:
                return True
        return False        

        