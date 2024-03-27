class Solution {
public:
    bool isIsomorphic(string s, string t) {
          vector<char>replaceS(256);
          vector<char>replaceT(256);
          for(int i=0;i<s.length();i++){
                  replaceS[s[i]] = t[i];
                  replaceT[t[i]] = s[i];
                  
          }
         for(int i=0;i<s.length();i++){
                if(replaceS[s[i]]!= t[i] || replaceT[t[i]]!=s[i]) return false;
          }
     return true;
    }
};