class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
           unordered_map<int,int>umap;
           vector<int>ans;
           set<int>st;
           for(int i=0;i<nums1.size();i++){
                  umap[nums1[i]]++;
           }
            for(int i=0;i<nums2.size();i++){
                 if(umap.find(nums2[i])!=umap.end()) st.insert(nums2[i]);
           }
           for(auto i:st){
                ans.push_back(i);
           }
        return ans;
    }
};