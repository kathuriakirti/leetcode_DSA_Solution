class Solution {
public:
    int missingNumber(vector<int>& nums) {
          int n= nums.size();
          int total_sum=  (n*(1+n))/2;
          int curr_sum=0;
          for(int x:nums){
                 curr_sum+=x;
          }
    return total_sum-curr_sum;

    }
};