class Solution {
public:
    bool checkPalindrome(string s, int i,int j){
          while(i<j){
                if(s[i]!=s[j]) return false;
                else{
                      i++; j--;
                }
          }
    return true;
    }
    bool validPalindrome(string s) {
          int st=0,e=s.length()-1;
          while(st<e){
               if(s[st]==s[e]){
                     st++; e--;
               }
               else{
                      // ith char remove
                      bool ans1= checkPalindrome(s,st+1,e);
                     // jth char remove
                       bool ans2= checkPalindrome(s,st,e-1);
                     return ans1||ans2;
               }
          }
    return true;
    }
};