class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         // find min element w.r.t to its next largest element from last
         int min_element=-1,n=nums.size();
         for(int idx=n-1; idx>=0;idx--){
                   if(idx-1>=0 && nums[idx]>nums[idx-1]) {
                         min_element=idx-1;
                         break;
                     } 
         }
         if(min_element!=-1){
              // find largest element greater than min element
              for(int idx=n-1;idx>=0;idx--){
                     if(nums[idx]>nums[min_element]){
                           swap(nums[idx],nums[min_element]);
                           break;
                     }
              }
         }
        reverse(nums.begin()+min_element+1,nums.end());
    }
};