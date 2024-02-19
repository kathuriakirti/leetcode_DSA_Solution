class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int n= arr.size();
        int idx=1,num=1;
         while(idx<=n && k>0){
               if(arr[idx-1]==num){
                    idx++;
               }
              else k--;
             num++;
         }
        while(k--){
             num++;
        }
    return num-1;
    }
};