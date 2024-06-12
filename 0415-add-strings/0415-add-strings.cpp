class Solution {
public:
    string addRE(string num1,string num2,int i,int j,int carry=0){
          // base condition
          // last carry add when both i and j less than 0 otherwise return empty string
          if(i<0 && j<0){
                if(carry!=0){
                       return string(1,carry+'0');
                }
                return "";
                }
          
        
         int Num1 = (i>=0?num1[i]:'0')-'0';
         int Num2 = (j>=0?num2[j]:'0')-'0';
         int add = Num1+Num2+carry;
         int digit = add%10;
          carry = add/10;
         string ans = "";
         ans.push_back(digit+'0');
         ans = addRE(num1,num2,i-1,j-1,carry)+ans ;
         return ans;
    }
    string addStrings(string num1, string num2) {
           int i=num1.size()-1,j= num2.size()-1;
           string ans= addRE(num1,num2,i,j);
            // reverse(ans.begin(),ans.end());
           return ans;
    }
};