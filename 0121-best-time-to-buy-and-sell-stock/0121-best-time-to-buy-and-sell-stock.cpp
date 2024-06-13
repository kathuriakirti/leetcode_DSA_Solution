class Solution {
public:
    int findProfit(vector<int>&nums,int idx,int buy,int profit){
            // base condition
              if(idx == nums.size()) return profit;
              buy = min(buy,nums[idx]);
              profit = max(profit,nums[idx]-buy);
              return findProfit(nums,idx+1,buy,profit);
    }
    int maxProfit(vector<int>& nums) {
          return findProfit(nums,0,nums[0],0);
    }
};