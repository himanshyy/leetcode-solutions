class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        freq={}
        for i in range(len(nums)):
            if nums[i] in freq:
                if abs(i-freq[nums[i]])<=k:
                    return True 
            freq[nums[i]]=i
        return False                
        