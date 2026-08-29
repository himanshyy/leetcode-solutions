class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        tri=[]
        left=0
        max_len=0

        for right in range(len(s)):
            while s[right] in tri:
                tri.remove(s[left])
                left+=1      
            tri.append(s[right])
            max_len=max(max_len,right-left+1)         
        return  max_len     
                

            

        