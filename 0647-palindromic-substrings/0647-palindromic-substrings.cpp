class Solution {
public:
    int checkPalindrome(string s, int i, int j){
           int count=0;
           while(i>=0 && j<s.length() && s[i]==s[j]){
                 count++;
                 i--; j++;
           }
    return count;
    }
    int countSubstrings(string s) {
           int totalCount=0;
          for(int center=0;center<s.length();center++){
                    // even 
                 int evenCount=  checkPalindrome(s,center,center+1);
                  // odd
                 int oddCount=  checkPalindrome(s,center,center);
                 totalCount = totalCount+ evenCount+oddCount;
           }
    return totalCount;
    }
};