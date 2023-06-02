//	https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int x=prices[n-1];
        int y=prices[n-1];
        int profit=0;
        for(int i=n-1;i>=0;i--)
        {
            x=prices[i];
            profit=max(profit,y-x);
            if(prices[i]>y )y=prices[i];
        }
        return profit;
    }
};