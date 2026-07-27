/*
121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //Time complexity : O(n)
        //Space complexity : O(1)
       //let consider on the very first day the stock price is minimum
       int minimum=prices[0];
       int max_profit=0,cost=0;
       int size=prices.size();
       for(int i=1;i<size;++i)
       {
        cost=prices[i]-minimum;
        //at each iteration checked either the new cost is greater than existing profit
        max_profit=(cost>max_profit)?cost:max_profit;
        //the minimum price to buy stock for the  max profit
        minimum=(prices[i]<minimum)?prices[i]:minimum;
       } 
       return max_profit;
    }
};