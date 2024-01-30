class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           unordered_map<int,int>umap;
          int n=nums.size();
          for(int i=0;i<n;i++){
                int res= target-nums[i];
                if(umap.find(res)!=umap.end()) return {umap[res],i};
                else umap[nums[i]]=i;
          }
    return {-1,-1};
    }
};