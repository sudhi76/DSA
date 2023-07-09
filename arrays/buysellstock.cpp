//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int profit = 0;
        int max_profit = 0;
       for(int i=0;i<prices.size();i++){
           min_price = min(prices[i],min_price);
           profit = prices[i]-min_price;
            max_profit = max(profit,max_profit);
       } 
       return max_profit;
    }
};