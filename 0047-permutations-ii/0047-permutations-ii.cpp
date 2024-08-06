class Solution {
public:
    void findPermutation(vector<int>& nums,vector<int>&permutation,int i, vector<vector<int>>&res){
             // base condition
             if(i>=nums.size()){
                   res.push_back(permutation);
                   return;
             }
             for(int j=i;j<nums.size();j++){
                    swap(permutation[i],permutation[j]);
                    findPermutation(nums,permutation,i+1,res);
                    swap(permutation[i],permutation[j]);
             }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
           vector<int>permutation = nums;
           vector<vector<int>>res;
           
           findPermutation(nums,permutation,0,res);
           set<vector<int>>st;
           for(auto &row : res){
                  st.insert(row);
           }
          vector<vector<int>>ans(st.begin(),st.end());
           return ans;
    }
};