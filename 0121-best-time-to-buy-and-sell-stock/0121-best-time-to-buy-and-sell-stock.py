class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        price=float('inf')
        max_profit=0
        for i in range(len(prices)):
            price=min(price,prices[i])
            max_profit=max(max_profit,prices[i]-price)
        return max_profit    

            

        