class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        max_candi=max(candies)
        output=[]
        for i in range(len(candies)):
            if candies[i]+extraCandies>=max_candi:
                output.append(True)
            else:
                output.append(False) 
        return output                