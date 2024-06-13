class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
          vector<int>pos;
          vector<int>neg;
          for(int i=0;i<nums.size();i++){
                 if(nums[i]>0) pos.push_back(nums[i]);
          }
          for(int i=0;i<nums.size();i++){
                 if(nums[i]<0) neg.push_back(nums[i]);
          }
          int posIdx=0,negIdx=0;
          for(int i=0;i<nums.size();i++){
                if(i%2==0) {
                        nums[i]=pos[posIdx];
                        posIdx++;
                }
                else{
                        nums[i]=neg[negIdx];
                        negIdx++;
                }
              
          }
        return nums;
    }
};