class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int buy_price=INT_MAX,sell_price=INT_MIN;
        for(int i=0;i<n;i++){
              buy_price=min(buy_price,prices[i]);
              sell_price=max(sell_price,prices[i]-buy_price);
        }
        return sell_price;
    }
};