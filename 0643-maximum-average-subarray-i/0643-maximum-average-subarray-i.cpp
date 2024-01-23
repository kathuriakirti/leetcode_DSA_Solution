class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=k-1,sum=0;
            for(int y=i;y<=j;y++){
                   sum+=nums[y];
            }
        
          j++;
         int max_sum=sum;
          while(j<nums.size()){
                   sum=  sum-nums[i]+nums[j];
                   max_sum= max(max_sum,sum);
                   j++;i++;
            }
           double avg= double(max_sum)/k;
        return avg;
    }
};