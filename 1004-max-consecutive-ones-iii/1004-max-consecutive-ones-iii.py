class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        left=0
        right=0
        count=0
        max_len=0
        for right in range(len(nums)):

            if nums[right]==0:
                count+=1
                

            while count > k:
                if nums[left]==0:
                    count-=1
                left+=1
                
            length=right-left+1
            max_len=max(max_len,length)
            right+=1
        
        return max_len            
        """left=0
        right=0
        max_length=0
        count=0
        length=0
        while count<=k:
            if nums[right]!=0:
                right+=1
                length+=right-left+1
                max_length=max(max_length,length)
            
            right+=1
            count+=1 
        left+=1 
        if nums[left]==0:
            count-=1

              
        return max_length   """ 


        


        