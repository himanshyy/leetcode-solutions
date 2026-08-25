class Solution(object):
    def frequencySort(self, nums):
        
        freq = {}

        # Frequency count
        for num in nums:
            if num in freq:
                freq[num] += 1
            else:
                freq[num] = 1

        # Sort
        return sorted(nums, key=lambda x: (freq[x], -x))