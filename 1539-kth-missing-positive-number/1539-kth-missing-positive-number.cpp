class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        //  int num=1,i=0;
        //  while(i<arr.size() && k--){
        //       if(num==arr[i]){
        //            i++;
        //       }
        //      else k--;
        //      num++;
        //  }
        // while(k--){
        //      num++;
        // }
        // return num-1;
        for(int i=0;i<arr.size();i++){
              if(arr[i]<=k)k++;
              else break;
        }
        return k;
    }
};