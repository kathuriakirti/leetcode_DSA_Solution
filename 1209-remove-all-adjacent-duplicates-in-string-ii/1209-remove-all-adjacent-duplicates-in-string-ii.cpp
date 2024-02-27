class Solution {
public:
    bool checkLastKChar( string &ans, int k,char ch){
            int it= ans.size()-1;
           for(int i=0;i<k-1;i++){
                  if(ans[it]!=ch) return false;
                  it--;
           }
    return true;
    }
    string removeDuplicates(string s, int k) {
         string ans;
         for(int i=0;i<s.size();i++){
                if(ans.size()<k-1) ans.push_back(s[i]);
                else{
                      if(checkLastKChar(ans,k,s[i])){
                             for(int i=0;i<k-1;i++) ans.pop_back();
                      }
                      else ans.push_back(s[i]);
                }
                    
         }
      return ans;
    }

};