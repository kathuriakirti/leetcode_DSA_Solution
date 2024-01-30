class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          vector<pair<int,int>>ans;
          int n=nums.size();
          for(int i=0;i<n;i++){
                ans.push_back({nums[i],i});
          }
          sort(ans.begin(),ans.end());
          int st=0,e=n-1;
          while(st<e){
               int curr_element= ans[st].first+ans[e].first;
               if(curr_element==target) 
                       return {ans[st].second,ans[e].second};
              else if(curr_element>target) e--;
              else st++;
          }
        return {-1,-1};
    }
};