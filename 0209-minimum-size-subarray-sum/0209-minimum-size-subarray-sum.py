class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        min_len=float('inf')
        left=0
        sums=0
        right=0
        for right in range(left,len(nums)):
            sums+=nums[right]
            while sums >= target: 
                min_len=min(min_len,right-left+1)
                sums-=nums[left]  
                left+=1  
        return 0 if min_len == float('inf') else min_len   


           
        