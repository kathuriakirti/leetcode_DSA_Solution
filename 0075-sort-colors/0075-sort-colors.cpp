class Solution {
public:
    void count(vector<int>nums){
         int zeros=0,ones=0,twos=0;
         for(int i=0;i<nums.size();i++){
               if(nums[i]==0) zeros++;
               else if(nums[i]==1) ones++;
               else twos++;
         }
         int i=0;
         while(zeros--){
             nums[i]=0;
             i++;
         }
         while(ones--){
             nums[i]=1;
             i++;
         }
         while(twos--){
             nums[i]=2;
             i++;
         }
    }
    void sortColors(vector<int>& nums) {
        //  count(nums);
         int idx=0;
         int l=0,h=nums.size()-1;
         while(idx<=h){
                if(nums[idx]==0){
                      swap(nums[l],nums[idx]);
                      l++;
                      idx++;
                }
                else if(nums[idx]==1){
                       idx++;
                }
                else{ // nums[idx]==2
                       swap(nums[h],nums[idx]);
                       h--;
                }
         }
    }
};