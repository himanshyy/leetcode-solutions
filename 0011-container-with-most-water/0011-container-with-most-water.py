class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left=0
        right=len(height)-1
        max_amount=0
        while left<right:
            amount=(right-left)*min(height[left],height[right])
            if amount>max_amount:
                max_amount=amount
            if height[left]<height[right]:
                left+=1
            else:
                right-=1    
        return max_amount    

        