class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        freq={}
        for ch in range(len(s)):
            if s[ch] in freq:
                freq[s[ch]]+=1
            else:
                freq[s[ch]]=1
        for k in range(len(s)):
            if freq[s[k]]==1:
                return k  
        return -1                   