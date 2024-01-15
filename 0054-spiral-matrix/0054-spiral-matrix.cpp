class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
           int m = matrix.size(), n = matrix[0].size();
           int starting_row=0,ending_col=n-1,ending_row=m-1,starting_col;
           int count=0,total_element=m*n;
           vector<int>ans;
           while(count<total_element){
                  for(int i=starting_col;i<=ending_col&&count<total_element;i++){
                           ans.push_back(matrix[starting_row][i]);
                           count++;
                  }
                  starting_row++;
                  for(int i=starting_row;i<=ending_row && count<total_element;i++){
                           ans.push_back(matrix[i][ending_col]);
                           count++;
                  }
                  ending_col--;
                 for(int i=ending_col;i>=starting_col && count<total_element;i--){
                           ans.push_back(matrix[ending_row][i]);
                           count++;
                  }
                  ending_row--;
                for(int i=ending_row;i>=starting_row && count<total_element;i--){
                           ans.push_back(matrix[i][starting_col]);
                           count++;
                  }
               starting_col++;
           }
    return ans;
    }
};