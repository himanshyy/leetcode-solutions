class Solution(object):
    def reversePrefix(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s=list(s)
        
        left=0
        right=k-1
        while left<right:
            s[left],s[right]=s[right],s[left]
            left+=1
            right-=1
        return "".join(s)        
        