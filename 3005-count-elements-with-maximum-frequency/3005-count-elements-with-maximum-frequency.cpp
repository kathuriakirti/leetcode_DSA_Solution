class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
          
        int n= nums.size();
        unordered_map<int,int>umap;
        //storing elements with frequency
        for(int i=0;i<n;i++){
              umap[nums[i]]++;
        }
        int max_frequency=0;
        for(auto x:umap){
              if(max_frequency<x.second) max_frequency=x.second;
        }
        int max_occurence=0;
        for(int i=0;i<n;i++){
              if(umap[nums[i]]==max_frequency) max_occurence++;
        }
     return max_occurence;
        
    }
};