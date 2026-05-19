class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        left=0
        right=len(nums)-1
        ans1 = -1
        while left <= right:
            mid=(left + right)//2
            if nums[mid]==target:
                ans1 = mid
                right = mid-1

            elif nums[mid]<target:
                left=mid+1

            else:
                right=mid-1
        left=0
        right=len(nums)-1
        ans2=-1 
        while left <= right:
            mid=(left+right)//2

            if nums[mid]==target:
                ans2=mid
                left=mid+1

            elif nums[mid]<target:
                left=mid+1
            else:
                right=mid-1  

        return [ans1,ans2]              

