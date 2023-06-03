//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int temp=prices[0];
        int profit=0;
        if(n==1)return profit;
        for(int i=0;i<n-1;i++)
        {
            if(prices[i+1]<prices[i]){
                profit+=prices[i]-temp;
                temp=prices[i+1];
            }
        }
        if(temp<prices[n-1])profit+=prices[n-1]-temp;
        return profit;
    }
};