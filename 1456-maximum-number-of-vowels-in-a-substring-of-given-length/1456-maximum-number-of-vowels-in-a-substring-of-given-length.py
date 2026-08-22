class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        count=0
        left=0
        max_count=0
        vowels="aeiouAEIOU"
        for num in range(k):
            if s[num] in vowels:
                count+=1
        max_count=max(max_count,count)        
        for right in range(k,len(s)):
            if s[right] in vowels:
                count+=1
            if s[left] in vowels:
                count-=1
            max_count = max(max_count, count)    
            left+=1
        return max_count       

        