class Solution {
public:
    int findMin(vector<int>& nums) {
          int n=nums.size();
          int st=0,e=n-1;
          while(st<e){
                // if array is not rotated and containing test case like [1,3]
                if(nums[st]<nums[e]) return nums[st];
                int mid= st+(e-st)/2;
                if(nums[mid]>=nums[st]) st=mid+1; //[5,4,3,2], [2,1]
                else e=mid;
          }
        return nums[st];
    }
};