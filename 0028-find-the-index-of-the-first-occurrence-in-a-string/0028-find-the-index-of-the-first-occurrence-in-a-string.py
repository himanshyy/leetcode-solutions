class Solution(object):
    def strStr(self, haystack, needle):
        """
        :type haystack: str
        :type needle: str
        :rtype: int
        """
        k=len(needle)
        for right in range(len(haystack)-k+1):
            window=haystack[right:right+k]
            if window == needle:
                return right
        return -1        


        