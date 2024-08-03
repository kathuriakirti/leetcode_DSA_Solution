class Solution {
public:
    void combinationSum_helper(vector<int>& candidates, int target, int sum, int idx, vector<int>&combination,vector<vector<int>>&res){
          // base condition
          if(sum==target){
                 res.push_back(combination);
                 return;
          }
          if(idx>=candidates.size() || sum>target) return;
          for(int i = idx; i<candidates.size();i++){
                combination.push_back(candidates[i]);
                combinationSum_helper(candidates,target,sum+candidates[i],i,combination,res);
                combination.pop_back();
          }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
          vector<int>combination;
          vector<vector<int>>res;
          combinationSum_helper(candidates,target,0,0,combination,res);
         return res;
    }
};