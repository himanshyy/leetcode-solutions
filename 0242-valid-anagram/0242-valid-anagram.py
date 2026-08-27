class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        freq1={}
        freq2={}
        for char in range(len(s)):
            if s[char] in freq1:
                freq1[s[char]]+=1
            else:
                freq1[s[char]]=1
        for char2 in range(len(t)):
            if t[char2] in freq2:
                freq2[t[char2]]+=1
            else:
                freq2[t[char2]]=1  
        return freq1==freq2