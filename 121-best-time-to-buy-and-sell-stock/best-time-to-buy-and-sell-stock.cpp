class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, j;
        int buy, sell;
        int profit=0;
        buy=prices[0];
        
        for(i=1; i<prices.size(); i++){
            sell= prices[i];
            if(prices[i]<buy){
                buy= prices[i];
            }

            profit= max(profit, sell-buy);
        }
        return profit;
    }
};