class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int n=arr.size(),i=0,num=1;
         while(k>0 && i<n){
              if(num==arr[i]) i++;
              else k--;
              num++;
         }
         while(k--) num++;
    return num-1;
    }
};