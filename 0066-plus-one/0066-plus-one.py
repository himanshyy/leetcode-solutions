class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """ 
        final=[]
        output=int("".join(map(str,digits)))
        output+=1
        final=list(map(int,str(output)))
        return final
            
        