class Solution {
public:
    void letterCombinations_helper(string &digits, vector<string>&letters, vector<string>&ans,int idx,string res){
            if(idx==digits.size()) {
                   ans.push_back(res);
                   return;
            }
            string value = letters[(digits[idx]-'0')]; //abc
            for(int i=0;i<value.size();i++){
                    res.push_back(value[i]);
                    letterCombinations_helper(digits,letters,ans,idx+1,res);
                    res.pop_back();
            }
            
          
    }
    vector<string> letterCombinations(string digits) {
          vector<string>letters =  {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
          vector<string>ans;
          if(digits.size()==0) return ans;
          letterCombinations_helper(digits,letters,ans,0,"");
          return ans;
    }
};