class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        i=prices[0]
        maxProfit=0
        for j in range (len(prices)):
            profit=prices[j]-i
            maxProfit=max(profit,maxProfit)
            i=min(i,prices[j])

        return maxProfit
        