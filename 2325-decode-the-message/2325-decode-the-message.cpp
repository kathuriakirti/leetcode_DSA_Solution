class Solution {
public:
    string decodeMessage(string key, string message) {
           vector<char>mapping(256,0);
           char start='a';
           for(int i=0;i<key.length();i++){
                    char ch= key[i];
                    if(ch!=' ' && mapping[ch]==0){
                            mapping[ch]=start;
                            start++;
                    }
           } 
          for(int i=0;i<message.length();i++){
                 char ch=message[i];
                 if(ch!=' '){
                        message[i]= mapping[ch];
                 }
          }
    return message;
    }
};