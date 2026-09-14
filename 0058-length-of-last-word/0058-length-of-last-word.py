class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        count=0
        right=len(s)-1
        while right >=0 and s[right]==" ":
            right-=1
        while right >=0 and  s[right]!=" ":
                count+=1
                right-=1
        return count        
                
        