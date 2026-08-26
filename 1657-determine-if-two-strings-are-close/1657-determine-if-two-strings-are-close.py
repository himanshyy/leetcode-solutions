class Solution(object):
    def closeStrings(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """
        freq1={}
        freq2={}
        if len(word1)!=len(word2):
            return False
        for i in word1:
            if i in freq1:
                freq1[i]+=1
            else:
                freq1[i]=1
        for i in word2:
            if i in freq2:
                freq2[i]+=1
            else:
                freq2[i]=1
        if set(freq1.keys()) != set(freq2.keys()):
            return False  
        if sorted(freq1.values())!=sorted(freq2.values()):
            return False 
        return True                    
        