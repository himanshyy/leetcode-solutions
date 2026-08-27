class Solution(object):
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        s=list(s)
        for char in range(0,len(s),2*k):
            
            left=char
            right=min(char+k-1,len(s)-1)
            while left<right:
                s[left],s[right]=s[right],s[left]
                left+=1
                right-=1
        return "".join(s)    




        