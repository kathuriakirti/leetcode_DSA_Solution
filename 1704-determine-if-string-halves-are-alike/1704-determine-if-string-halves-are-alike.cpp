class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,int>umap;
        umap['a']=1;
        umap['e']=1;
        umap['i']=1;
        umap['o']=1;
        umap['u']=1;
        umap['A']=1;
        umap['E']=1;
        umap['I']=1;
        umap['O']=1;
        umap['U']=1;
        int count1=0,count2=0;
        int n= s.size();
        for(int i=0;i<n/2;i++){
              if(umap.find(s[i])!=umap.end()) count1++;
        }
        for(int i=n/2;i<n;i++){
               if(umap.find(s[i])!=umap.end()) count2++;
        }
        return count1==count2;
    }

};