class Solution {
public:
    void combinationSumHelper(vector<int>&candidates,int target, vector<vector<int>>&res, vector<int>&ans,int start, int sum){
             // base case
             if(sum==target){
                    res.push_back(ans);
                    return;
             }
             if(sum>target) return;
             for(int j=start;j<candidates.size();j++){
                     ans.push_back(candidates[j]);
                     combinationSumHelper(candidates,target,res,ans,j,sum+candidates[j]);
                     ans.pop_back();
             }
           
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
             vector<vector<int>>res;
             vector<int>ans;
             combinationSumHelper(candidates,target,res,ans,0,0);
             return res;
             
    }
};