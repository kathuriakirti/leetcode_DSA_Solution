class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          int sum=0,currSum=0;
          for(auto num:nums)  sum+=num;
          for(int i=0;i<nums.size();i++){
                if(sum-(currSum+nums[i])==currSum) return i;
                currSum+=nums[i];
          }
    return -1;
    }
};