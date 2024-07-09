class Solution {
public:
    void findLetterCombination(string &digits, string &output, vector<string>&mapping,int idx, vector<string>&ans){
            // base condition
            // traversing over the digits
            if(idx>=digits.length()){
                   ans.push_back(output);
                   return;
            }
            // now will get a string corresponding to digit number
            int number =  digits[idx]-'0';
            string value = mapping[number];
            // now iterate over the number's string 
            for(int i=0;i<value.size();i++){
                   // now store value's char
                   output.push_back(value[i]);
                   // function call for the next digit number
                   findLetterCombination(digits,output,mapping,idx+1,ans);
                   output.pop_back(); // backtracking 
            }
    }
    vector<string> letterCombinations(string digits) {
          // output string
          // mapping vector
         // index
        // res vector
         string output = "";
         vector<string>mapping = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
         vector<string>ans;
         // base case
         if(digits.size()<=0) return ans; // ans is empty
         findLetterCombination(digits,output,mapping,0,ans);
     return ans;
    }
};