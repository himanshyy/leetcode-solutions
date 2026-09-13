class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left=0
        maximum_one=0
        for right in range(len(nums)):
            if nums[right]==0:
                left=right+1
            maximum_one=max(maximum_one,right-left+1)   
        return maximum_one  



        