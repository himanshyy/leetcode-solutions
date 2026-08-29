class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        seen={}
        count=0
        output=[]
        for i in range(len(nums)):
            if nums[i] in seen:
                seen[nums[i]]+=1
            else:
                seen[nums[i]]=1
        sorted_ele = sorted(seen.keys(), key=seen.get, reverse=True)

        return sorted_ele[:k]            


       

        
        