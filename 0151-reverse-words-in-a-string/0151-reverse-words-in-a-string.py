class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        output=[]
        word=s.split()
        word.reverse()
        return " ".join(word)    

        

