class Solution {
public:
    void combinationSum_helper(vector<int>& candidates, int target, int idx, vector<vector<int>>&ans, vector<int>&currSum){
          // base conditions
           if(target==0){
                 ans.push_back(currSum);
                 return;
           }
           if(idx>=candidates.size()) return;
          // pick element
          if(candidates[idx]<=target){
               currSum.push_back(candidates[idx]);
               combinationSum_helper(candidates,target-candidates[idx],idx,ans,currSum);
               currSum.pop_back();
          }
          // Not pick element
          combinationSum_helper(candidates,target,idx+1,ans,currSum);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
             vector<vector<int>>ans;
             vector<int>currSum;
             combinationSum_helper(candidates,target,0,ans,currSum);
    return ans;
    }
};