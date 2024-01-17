class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>winner;
        map<int,int>looser;
        set<int> keysToRemove;
        vector<int>l;
        vector<int>w;
        for(int i=0;i<matches.size();i++){
              for(int j=0;j<matches[0].size();j++){
                     if(j==0) winner[matches[i][j]]++;
                     else looser[matches[i][j]]++;
              }
        }
        for (auto it : winner) {
            if(looser.find(it.first) == looser.end()) {
                keysToRemove.insert(it.first);
            } 
        }
        for (auto it : looser) {
            if(it.second==1) l.push_back(it.first);
        }
         for (auto it : keysToRemove) {
             w.push_back(it);
        }
        vector<vector<int>>res;
        res.push_back(w);
        res.push_back(l);
        return res;
    }
};