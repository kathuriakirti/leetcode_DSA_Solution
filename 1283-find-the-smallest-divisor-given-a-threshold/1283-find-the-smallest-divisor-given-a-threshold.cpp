class Solution {
public:
    bool foundDivisor(vector<int>& nums, int threshold, int mid){
          long long result=0;
          for(auto x:nums){
                if(x%mid!=0) result+=(long long)(x/mid)+1;
                else result+=(x/mid);
          }
        return result<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
          int low=1,high=*max_element(nums.begin(),nums.end());
          int ans=-1;
          while(low<=high){
                int mid= low+(high-low)/2;
                if(foundDivisor(nums,threshold,mid)){
                       ans=mid;
                       high=mid-1;
                }
                else low=mid+1;
          }
    return ans;
    }
};