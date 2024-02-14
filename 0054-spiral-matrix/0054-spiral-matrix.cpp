class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         int m=matrix.size(),n=matrix[0].size();
         int elements=0,start_row=0,end_row=m-1;
         int start_col=0,end_col=n-1;
         vector<int>ans;
         while(elements<m*n){
               for(int col=start_col;col<=end_col && elements<m*n;col++){
                      ans.push_back(matrix[start_row][col]);
                      elements++;
               }
               start_row++;
              for(int row=start_row;row<=end_row && elements<m*n;row++){
                     ans.push_back(matrix[row][end_col]);
                      elements++;
              }
              end_col--;
              for(int col=end_col;col>=start_col && elements<m*n;col--){
                     ans.push_back(matrix[end_row][col]);
                      elements++;
              }
              end_row--;
              for(int row=end_row;row>=start_row && elements<m*n;row--){
                      ans.push_back(matrix[row][start_col]);
                      elements++;
              }
              start_col++;
         }
    return ans;
    }
};