class Solution {
public:
    bool checkPalindrome(string &s, int low,int high){
          while(low<high){
                if(s[low]!=s[high]) return false;
                low++; high--;
          }
    return true;
    }
    bool validPalindrome(string s) {
           int low=0,high=s.length()-1;
           while(low<high){
                   if(s[low]!=s[high]){
                         bool ans1= checkPalindrome(s,low+1,high);
                         bool ans2= checkPalindrome(s,low,high-1);
                         return ans1 || ans2;
                   }
                  low++; high--;
           }
    return true;
      
    }
};