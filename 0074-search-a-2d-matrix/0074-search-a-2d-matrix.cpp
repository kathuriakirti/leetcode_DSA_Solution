class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int rows= matrix.size(),cols= matrix[0].size();
         int n= rows*cols;
         int start=0,end=n-1;
         while(start<=end){
               int mid= start+(end-start)/2;
               int row=mid/cols,col=mid%cols;
               if(matrix[row][col]==target) return true;
               else if(matrix[row][col]<target) start=mid+1;
               else end= mid-1;
         }
    return false;
    }
};