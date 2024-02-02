class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
           int n=nums.size(),st=0,e=n-1,ans=-1;
          bool flag=false;
         
           while(st<=e){
                  int mid=st+(e-st)/2;
                  if(nums[mid]==target){
                       return mid;
                      flag=true;
                  }
                  else if(nums[mid]<target){
                         ans=mid;
                        st=mid+1;
                       
                            
                  }
                  else e=mid-1;
           }
          cout<<ans<<endl;
         
    return ans+1;  
    }
};