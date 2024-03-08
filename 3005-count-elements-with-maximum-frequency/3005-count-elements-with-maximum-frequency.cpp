class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
          unordered_map<int,int>umap;
          int maxOccurence=0;
          for(auto num:nums){
                 umap[num]++;
          }
          for(auto x:umap){
                 maxOccurence = max(maxOccurence,x.second);
          }
         cout<<maxOccurence<<endl;
         int count=0;
         // in umap there will  be not duplicates key that's why will            find through vector
         for(auto [c1,c2]:umap){
                if(c2==maxOccurence) count++;
         }
        return count*maxOccurence;
        
    }
};