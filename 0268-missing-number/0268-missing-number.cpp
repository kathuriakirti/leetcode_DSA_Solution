class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int element_xor=0;
        for(int i=0;i<nums.size();i++){
               element_xor^=nums[i];
        }
        int numbers_xor=0;
         for(int i=0;i<=nums.size();i++){
               numbers_xor^=i;
        }
        
        return element_xor^numbers_xor;
        
    }
};