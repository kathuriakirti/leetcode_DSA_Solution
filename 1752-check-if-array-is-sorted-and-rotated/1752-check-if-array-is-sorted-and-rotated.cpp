class Solution {
public:
    bool check(vector<int>& nums) {
           int idx = -1,n = nums.size();
           for(int i=1;i<n;i++){
                 if(nums[i]<nums[i-1]) idx = i;  // pivot element idx
           }
           if(idx==-1) return true;
           int left = n-idx;
           int right =idx;
        
           reverse(nums.begin(),nums.end());
           reverse(nums.begin(),nums.begin()+left);
           reverse(nums.begin()+left,nums.end());
           bool flag = true;
           for(int i=1;i<n;i++){
                 if(nums[i]<nums[i-1]) flag=false;  
           }
           return flag;

    }
};