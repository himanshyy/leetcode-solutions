class Solution(object):
    def rotate(self, nums, k):
        n = len(nums)
        k = k % n

        # Step 1: reverse complete array
        nums.reverse()

        # Step 2: reverse first k elements
        nums[:k] = nums[:k][::-1]

        # Step 3: reverse remaining elements
        nums[k:] = nums[k:][::-1]