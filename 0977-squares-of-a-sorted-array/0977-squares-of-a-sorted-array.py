class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        output=[0]*len(nums)
        left=0
        for i in range(len(nums)):
            output[left]=nums[i]**2
            left+=1
        output=sorted(output)
        return output    
            

        