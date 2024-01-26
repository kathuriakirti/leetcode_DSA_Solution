class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
            int n= a.size();
             vector<int>ans(n);
          int pos=0,neg=1;
          for(int index=0;index<n;index++){
                 if(a[index]>0){
                        // if(pos>=n){
                        //         pos=0;
                        // }
                        ans[pos]=a[index];
                        pos+=2;
                 }
                 else{
                       if(neg>=n){
                                neg=0;
                        }
                        ans[neg]=a[index];
                        neg+=2;
                 }
          }
     return ans;
    }
};