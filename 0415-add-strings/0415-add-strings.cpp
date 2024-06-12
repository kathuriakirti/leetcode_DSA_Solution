class Solution {
public:
    void addRE(string &num1,string &num2,int i,int j,int carry,string &ans){
          // base condition
          // last carry add when both i and j less than 0 otherwise return empty string
          if(i<0 && j<0){
                if(carry!=0){
                       ans.push_back(carry+'0');
                }
                return;
          }
        
         int Num1 = (i>=0?num1[i]:'0')-'0';
         int Num2 = (j>=0?num2[j]:'0')-'0';
         int add = Num1+Num2+carry;
         int digit = add%10;
          carry = add/10;
         ans.push_back(digit+'0');
          addRE(num1,num2,i-1,j-1,carry,ans) ;
    }
    string addStrings(string num1, string num2) {
           int i=num1.size()-1,j= num2.size()-1;
           string ans ="";
            addRE(num1,num2,i,j,0,ans);
           reverse(ans.begin(),ans.end());
           return ans;
    }
};