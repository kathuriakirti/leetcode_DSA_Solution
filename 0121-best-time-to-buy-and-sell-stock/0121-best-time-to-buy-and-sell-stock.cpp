class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int n=prices.size();
        int min=INT_MAX,max=INT_MIN;
        int ans=0;
        int buy_day=1;
         bool min_found=false;
        int sell_day;
         for(int i=0;i<n;i++){
                  if(min>prices[i]){
                       min=prices[i];
                       min_found=true;
                       buy_day=i;
                      sell_day=buy_day+1;
                  }
              
              if(min_found==true && sell_day<n){
                    
                     if(prices[buy_day]<prices[sell_day]){
                           int profit=  prices[sell_day]-prices[buy_day];
                           if(ans<profit) ans=profit;
                     }
                  sell_day++;
              }
         }
//          if(min_found=true && buy_day+1<n ){
//                 for(int i=0;i<n;i++){
//                   if(max<prices[i]){
//                        max=prices[i];
//                         profit=max-min;
//                   }
                    
//                 }
                  
//          }
//         cout<<profit<<endl;
         
        if(ans) return ans;
        else return 0;
    }
};