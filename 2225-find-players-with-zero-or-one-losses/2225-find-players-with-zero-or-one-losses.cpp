class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
           map<int,int>looser;
           set<int>ws;
           vector<int>w;
           vector<int>l;
           for(int i=0;i<matches.size();i++){
                  for(int j=0;j<matches[0].size();j++){
                          if(j==1) looser[matches[i][j]]++;
                  }
           }
          for(int i=0;i<matches.size();i++){
                  for(int j=0;j<matches[0].size();j++){
                          if(j==0){
                                 if(looser.find(matches[i][j])==looser.end()) ws.insert(matches[i][j]);
                          }
                  }
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