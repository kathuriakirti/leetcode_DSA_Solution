class Solution {
public:
    void sortColors(vector<int>& nums) {
         int i=0,j=nums.size()-1,it=0;
        while(it<=j){
                 if(nums[it]==0){
                        swap(nums[it],nums[i]);
                        it++; i++;
                 }
                 else if(nums[it]==2){
                       swap(nums[it],nums[j]);
                       j--;
                 }
                 else it++;
               cout<<it<<" ";
         }
    }
};