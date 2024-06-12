class Solution {
public:
    void sortColors(vector<int>& nums) {
           int idx=0, leftIdx=0,rightIdx=nums.size()-1;
           while(idx<=rightIdx){
                  if(nums[idx]==2){
                        swap(nums[idx],nums[rightIdx]);
                        rightIdx--;
                  }
                  else if(nums[idx]==0){
                         swap(nums[idx],nums[leftIdx]);
                         leftIdx++;
                         idx++;
                  }
                 else idx++;
           }
    }
};