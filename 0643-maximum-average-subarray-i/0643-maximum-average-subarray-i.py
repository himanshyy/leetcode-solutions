class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        left=0
        max_avg=0
        sums=0

        for i in range(k):
            sums+=nums[i]
        max_avg=sums/float(k)    
            
        for right in range(k,len(nums)):
            sums=sums-nums[left]+nums[right]
            average=sums/float(k)
            max_avg=max(max_avg,average)
            left+=1
            
        return max_avg    
           
                
        