class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        if len(str1)<len(str2):
            small=str1
        else:
            small=str2
        for i in range(len(small),0,-1):
            x=small[:i]
            if len(str1)%len(x)==0 and len(str2)%len(x)==0:
                if x*(len(str1)//len(x))==str1 and x*(len(str2)//len(x))==str2:
                    return x
        return ""                     
        