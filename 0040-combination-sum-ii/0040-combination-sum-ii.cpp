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
                if(i>idx && candidates[i]==candidates[i-1]) continue;
                combination.push_back(candidates[i]);
                combinationSum_helper(candidates,target,sum+candidates[i],i+1,combination,res);
                combination.pop_back();
          }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
          vector<int>combination;
          vector<vector<int>>res;
          sort(candidates.begin(),candidates.end());
          combinationSum_helper(candidates,target,0,0,combination,res);
         return res;
    }
};