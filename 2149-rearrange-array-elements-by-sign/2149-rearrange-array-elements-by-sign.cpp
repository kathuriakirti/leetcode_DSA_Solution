class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
          int n=nums.size();
          vector<int>res(n);
          int posIdx=0,negIdx=1;
          for(int idx=0;idx<nums.size();idx++){
                 if(nums[idx]>=0){
                       res[posIdx]=nums[idx];
                       posIdx+=2;
                 }
                 else{
                       res[negIdx]=nums[idx];
                       negIdx+=2;
                 }
          }
        return res;
    }
};