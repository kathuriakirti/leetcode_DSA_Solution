class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
          vector<int>ans(1001,0);
          set<int>st;
          vector<int>res;
          for(auto num:nums1){
                 
              ++ans[num];
          }
          for(auto num:nums2){
                 
              if(ans[num]!=0) st.insert(num);
          }
        for(auto num:st){
                res.push_back(num);
          }
        return res;
    }
};