class Solution {
public:
    string decodeMessage(string key, string message) {
          char mapping[257] = {0};
          char start='a';
          for(auto ch : key){
                if(ch!=' ' && mapping[ch]==0 ){  
                       mapping[ch]= start;
                        start++;
                }
          }
          string ans;
          for(auto ch: message){
                if(ch==' ') ans.push_back(' ');
                else{
                     ans.push_back(mapping[ch]);
                }
          }
    return ans;
    }
};