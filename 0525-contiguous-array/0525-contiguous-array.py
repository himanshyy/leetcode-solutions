class Solution(object):
    def findMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count=0
        seen={0:-1}
        longest=0
        for i in range(len(nums)):
            if nums[i]==0:
                count-=1
            else:
                count+=1
            if count in seen:
                length=i-seen[count]
                longest=max(longest,length)
            else:
                seen[count]=i 
        return longest                  
        