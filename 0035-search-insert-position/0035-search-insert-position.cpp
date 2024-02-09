class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int n=nums.size();
          int st=0,e=n-1,ans;
          while(st<=e){
                int mid= st+(e-st)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]<target){
                     ans=mid+1;
                     st=mid+1;
                }
                else e=mid-1;
          }
    return ans;
    }
};