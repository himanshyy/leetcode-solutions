class Solution(object):
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        stack1=[]
        stack2=[]
        for ch in s:
            if ch=='#':
                if stack1:
                    stack1.pop()
            else:        
                stack1.append(ch)
        for hc in t:
            if hc == '#':
                if stack2:
                    stack2.pop()  
            else:
                stack2.append(hc) 
        return stack1==stack2                            
        