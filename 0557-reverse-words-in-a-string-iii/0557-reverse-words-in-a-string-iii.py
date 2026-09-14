class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=list(s)
        left=0
        for right in range(len(s)+1):
            if right==len(s) or s[right]==" " :
                i=left
                j=right-1
                while i<j:
                    s[i],s[j]=s[j],s[i]
                    i+=1
                    j-=1
                left=right+1   
        return "".join(s)     

        