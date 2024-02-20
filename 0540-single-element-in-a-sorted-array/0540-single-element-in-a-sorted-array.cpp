class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0,e=nums.size()-1;
        while(st<e){
              int mid= st+(e-st)/2;
              int num= (mid%2==0)?mid+1:mid-1;
              if(nums[mid]==nums[num]) st=mid+1;
              else e=mid;
        }
    return nums[st];
    }
};