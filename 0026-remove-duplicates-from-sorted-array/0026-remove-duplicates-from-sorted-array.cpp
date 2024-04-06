class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int idx=0;
         for(int i=1;i<nums.size();i++){
                if(nums[i]>nums[idx]) {
                       swap(nums[idx+1],nums[i]);
                       idx++;
                }
                
         }
    return idx+1;
    }
};