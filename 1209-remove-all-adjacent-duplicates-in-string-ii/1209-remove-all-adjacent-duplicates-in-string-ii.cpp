class Solution {
public:
   bool check(string &ans, int k,char curr_element){
          int it= ans.size()-1;
          for(int i=0;i<k-1;i++){
                if(ans[it]!=curr_element) return false;
                it--;
          }
    return true;
    }
    string removeDuplicates(string s, int k) {
          string ans;
          for(int i=0;i<s.length();i++){
                  if(ans.size()<k-1) ans.push_back(s[i]);
                  else{ 
                         // check last k-1 characters
                         if(check(ans,k,s[i])){
                                for(int i=0;i<k-1;i++){
                                        ans.pop_back();
                                }
                               // cout<<ans<<endl;
                         }
                         else ans.push_back(s[i]);
                  }
          }
     return ans;
    }
};