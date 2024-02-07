class Solution {
public:
    vector<int>search(vector<int>&nums,int target){
          int n=nums.size();
          int st=0,e=n-1;
          int first_idx=-1,last_idx=-1;
          while(st<=e){
                  int mid= st+(e-st)/2;
                  if(nums[mid]==target){
                       first_idx=mid;
                        e--;
                  }
                  else if(nums[mid]<target) st++;
                  else e--;
          }
          st=0,e=n-1;
           while(st<=e){
                  int mid= st+(e-st)/2;
                  if(nums[mid]==target){
                       last_idx=mid;
                        st++;
                  }
                  else if(nums[mid]<target) st++;
                  else e--;
          }
     return {first_idx,last_idx};
    }
    vector<int> searchRange(vector<int>& nums, int target) {
          vector<int>ans=search(nums,target);
          return ans;
    }
};