class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=k-1,sum=0;
            for(int y=i;y<=j;y++){
                   sum+=nums[y];
            }
        int max_sum=sum;
          j++;
          while(j<nums.size()){
                   sum-=nums[i];
                   sum+=nums[j];
                   max_sum= max(max_sum,sum);
                   j++;i++;
            }
           double avg= double(max_sum)/k;
        return avg;
    }
};