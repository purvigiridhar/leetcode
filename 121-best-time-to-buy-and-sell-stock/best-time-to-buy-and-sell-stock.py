class Solution(object):
    def maxProfit(self, prices):
        min_p = float('inf')
        max_p = 0
        
        for price in prices:
            if price < min_p:
                min_p = price
            elif price - min_p > max_p:
                max_p = price - min_p
                
        return max_p
        """
        :type prices: List[int]
        :rtype: int
        """
        