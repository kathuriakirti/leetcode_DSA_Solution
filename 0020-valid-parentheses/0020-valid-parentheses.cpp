class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto ch: s){
               if(ch=='('||ch=='{'||ch=='['){
                      st.push(ch);
               }
               else{
                      if(st.size()!=0){
                                             if(ch==')'&&st.top()=='('||ch=='}'&&st.top()=='{'||ch==']'&&st.top()=='[' ){
                                     st.pop();
                                             }
                                 else return false;
                      }
                      else return false;
               }
                     
        }
    return st.size()==0?true:false;
    }
};