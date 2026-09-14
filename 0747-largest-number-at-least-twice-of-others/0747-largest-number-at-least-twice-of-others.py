class Solution(object):
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_num=max(nums)
        max_index=nums.index(max_num) 
        for i in range(len(nums)):
            if i == max_index:
                continue
            if max_num < 2 * nums[i]:
                return -1 
        return max_index    
                
        