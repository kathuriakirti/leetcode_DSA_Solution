class Solution {
public:
    int maxSubArrayHelper(vector<int>& nums, int st, int e){
          // base case
          if(st==e) return nums[st];
          int mid = st + ((e-st)>>1);
          int maxLeftSub = maxSubArrayHelper(nums,st,mid);
          int maxRightSub = maxSubArrayHelper(nums,mid+1,e);
          int maxRightCross=INT_MIN, maxLeftCross=INT_MIN;
          int leftCross=0,rightCross=0;
          for(int i=mid;i>=st;i--){
                 leftCross += nums[i];
                 if(leftCross>maxLeftCross) maxLeftCross = leftCross;
                     
          }
          for(int i=mid+1;i<=e;i++){
                 rightCross+=nums[i];
                 if(rightCross>maxRightCross) maxRightCross = rightCross;
          }
          int borderCross = maxLeftCross+maxRightCross;
         return max(maxLeftSub,max(maxRightSub,borderCross));
    }
    int maxSubArray(vector<int>& nums) {
          return maxSubArrayHelper(nums,0,nums.size()-1);
    }
};