class Solution(object):
    def largestAltitude(self, gain):
        """
        :type gain: List[int]
        :rtype: int
        """
        highest=0
        sums=0
        for i in range(len(gain)):
            sums+=gain[i]
            highest=max(highest,sums)
        return highest   
        