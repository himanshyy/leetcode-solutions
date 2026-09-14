class Solution(object):
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        freq={}
        n=len(nums)
        current=n*(n+1)//2
        actual=sum(nums)
        
        output=[]
        for i in range(len(nums)):
            if nums[i] in freq:
                freq[nums[i]]+=1
            else:
                freq[nums[i]]=1
        for k in freq:
            if freq[k]>1:
                output.append(k)
        final = current-actual
        missing=output[0]+final
        output.append(missing)
        return output

        