class Solution(object):
    def productExceptSelf(self, nums):

        output = [1] * len(nums)

        left_product = 1

        # Left side product
        for i in range(len(nums)):
            output[i] = left_product
            left_product *= nums[i]

        right_product = 1

        # Right side  product
        for i in range(len(nums) - 1, -1, -1):
            output[i] *= right_product
            right_product *= nums[i]

        return output