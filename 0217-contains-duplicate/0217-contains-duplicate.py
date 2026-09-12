class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        
        seen={}
        for i in range(len(nums)):
            if nums[i] in seen:
                seen[nums[i]]+=1
            else:
                seen[nums[i]]=1
        for k in seen:
            if seen[k]>=2:
                return True
            
        return False"""
        freq={}
        for i in range(len(nums)):
            if nums[i] in freq:
                freq[nums[i]]+=1
            else:
                freq[nums[i]]=1
        for k in freq:
            if freq[k] >= 2:
                return True 
        return False                   



           


        