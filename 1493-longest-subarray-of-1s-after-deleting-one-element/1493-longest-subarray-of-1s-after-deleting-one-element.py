class Solution(object):
    def longestSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        left=0
        right=0
        max_len=0
        length=0
        count=0
        for right in range(len(nums)):
            if nums[right]==0:
                count+=1
            while count>1:
                if nums[left]==0:
                    count-=1
                    
                left+=1

            length=right-left+1

            max_len=max(max_len,length)
            
        return max_len-1       

        