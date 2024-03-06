class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
           int smaller=0,larger=0;
           int n=nums.size();
           vector<int>ans;
           for(auto num:nums){
                   if(num<target) smaller++;
                   else if(num>target) larger++;
           }
           for(int i=smaller; i<=n-larger-1;i++){
                  ans.push_back(i);
           }
    return ans;
    }
};