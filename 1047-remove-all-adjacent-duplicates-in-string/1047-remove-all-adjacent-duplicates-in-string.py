class Solution(object):
    def removeDuplicates(self, s):
        """
        :type s: str
        :rtype: str
        """
        stack=[]
        for right in range(len(s)):
            
            if stack and stack[-1]==s[right]:
                stack.pop()
            else:
                stack.append(s[right])    
        return "".join(stack)      

        