class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
          int Max_sum=INT_MIN,sum=0;
          for(int i=0;i<nums.size();i++){
                 if(nums[i]!=0) sum+=nums[i];
                 else sum=0;
                 Max_sum= max(Max_sum,sum);
           }
    return Max_sum;
    }
};