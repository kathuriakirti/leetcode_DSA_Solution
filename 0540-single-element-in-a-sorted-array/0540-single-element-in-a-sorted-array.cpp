class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int st=0,e=nums.size()-1,ans=-1;
         int n= nums.size();
         
         while(st<=e){
               int mid= st+(e-st)/2;
               if(mid%2==0){
                     if(mid+1<n && nums[mid]==nums[mid+1]) st=mid+1;
                     else{
                           ans=mid;
                           e=mid-1;
                     }
               }
              else{
                    if(mid-1>=0 && nums[mid]==nums[mid-1]) st=mid+1;
                     else{
                           ans=mid-1;
                           e=mid-1;
                     }
              }
         }
        return n==1?nums[0]:nums[ans];
    } 
};