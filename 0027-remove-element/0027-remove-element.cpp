class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
           int index=0,right=nums.size()-1,left=0;
           
           for( index=0;index<nums.size();index++){
                  if(nums[left]==val) {
                         swap(nums[left],nums[right]);
                         right--;
                  }
                  else left++;
           }
        int k=0;
         for(auto x:nums){
               if(x!=val) k++;
         }
        return k;   
    }
};