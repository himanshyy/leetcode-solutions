class Solution(object):
    def removeDuplicates(self, nums):
        """count = 1

        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                nums[count] = nums[i]
                count += 1

        return count"""
        j=0
        for i in range(len(nums)):
            if nums[j]!=nums[i]:
                j+=1
                nums[j]=nums[i]
        return j+1     
