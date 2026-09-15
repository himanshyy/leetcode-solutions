class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        prefix=0
        suffix=0
        answer=nums[0]
        for i in range(len(nums)):
            if prefix==0:
                prefix=1
            if suffix==0:
                suffix=1
            prefix=prefix*nums[i]
            suffix=suffix*nums[len(nums)-1-i] 
            answer=max(answer,prefix,suffix)
        return answer          