class Solution {
public:
    int pivotIndex(vector<int>& nums) {
          int totalSum=0;
          for(auto num:nums) totalSum+=num;
          int currSum=0;
          for(int i=0;i<nums.size();i++){
                if(totalSum-currSum-nums[i]==currSum) return i;
                currSum+=nums[i];
          }
    return -1;
    }
};