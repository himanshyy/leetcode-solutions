class Solution(object):
    def characterReplacement(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        left=0
        freq={}
        max_val=0
        answer=0
        for right in range(len(s)):
            if s[right] in freq:
                freq[s[right]]+=1
            else:
                freq[s[right]]=1
            max_val=max(max_val,freq[s[right]]) 
            while (right-left+1)-max_val>k:
                freq[s[left]]-=1
                left+=1
            answer=max(answer,right-left+1)
        return answer        


        