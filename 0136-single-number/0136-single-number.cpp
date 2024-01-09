class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //       unordered_map<int,int>umap;
    //       for(int i=0;i<nums.size();i++){
    //             int x= nums[i];
    //             umap[x]= umap[x]+1;
    //       }
    //       for(auto it:umap){
    //             if(it.second==1) return it.first;
    //       }
    // return 0;
     int res=0;
    for(int i=0;i<nums.size();i++){
          
           res^=nums[i];
    }
    return res;
    
    }
};