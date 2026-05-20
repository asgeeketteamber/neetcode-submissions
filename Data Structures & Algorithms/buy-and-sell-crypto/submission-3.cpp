class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int i=prices[0];
        int maxProfit=0;
        for(int j=0;j<n;j++)
        {
            int profit=prices[j]-i;
            maxProfit=max(profit,maxProfit);
            i=min(i,prices[j]);

        }
        return maxProfit;
        
    }
};
