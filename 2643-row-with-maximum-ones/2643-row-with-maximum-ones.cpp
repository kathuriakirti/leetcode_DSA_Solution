class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
          vector<int>ans;
          int maxOneCount=INT_MIN,rowNo=INT_MAX;
          for(int i=0;i<mat.size();i++){
                 int oneCount=0;
                 for(int j=0;j<mat[i].size();j++){
                         if(mat[i][j]==1) oneCount++ ;
                 }
                if(oneCount>maxOneCount) {
                      maxOneCount = oneCount;
                      rowNo =i;   
                }
                 
          }
         ans.push_back(rowNo);
         ans.push_back(maxOneCount);
        return ans;
    }
};