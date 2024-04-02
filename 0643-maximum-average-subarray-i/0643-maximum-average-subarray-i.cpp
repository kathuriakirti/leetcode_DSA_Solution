class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int j = k-1,i=0,sum=0;
         for(int i=0;i<k;i++) sum+=nums[i];
         int maxSum=sum;
         j++;
         while(j<nums.size()){
               sum = sum+nums[j]-nums[i];
               maxSum = max(sum,maxSum);
               j++;
               i++;
         }
    return maxSum/(double)k;
    }
};