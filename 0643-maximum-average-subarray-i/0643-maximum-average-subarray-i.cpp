class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int n=nums.size();
         int i=0,j=0;
         long long sum=0,ans=INT_MIN;
         while(j<n){
               sum+=nums[j];
               if(j-i+1<k)    j++;
               else if(j-i+1==k){
                    ans=max(sum,ans);
                    sum=sum-nums[i];
                    i++;
                    j++;
               }
                  
         }
        return ans/(double)k;
         
    }
};