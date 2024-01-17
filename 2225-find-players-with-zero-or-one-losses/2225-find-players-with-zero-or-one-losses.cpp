class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
           set<int>ws;
           map<int,int>looser;
           vector<int>w;
           vector<int>l;
           for(auto arr:matches){
                  looser[arr[1]]++;
           }
           for(auto arr:matches){
                 if(looser.find(arr[0])==looser.end()) ws.insert(arr[0]);
           }
          for(auto &[f,s]:looser){
                if(s==1) l.push_back(f);
          }
          for(auto it:ws){
                w.push_back(it);
          }
         vector<vector<int>>res;
         res.push_back(w);
         res.push_back(l);
        return res;
    }
};