class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
          int max_sum=0;
          int n=nums.size();
         for(int i=0;i<k;i++){
                max_sum+=nums[i];
         }
        int sum=max_sum;
        if(n>1){
              for(int i=0;i<=n-k;i++){
                sum= sum-nums[i]+nums[i+k];
               max_sum= max(sum,max_sum);
              }
        }
       
        return max_sum/double(k);
    }
};