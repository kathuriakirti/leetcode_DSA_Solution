class Solution {
public:
    bool IsPossible(vector<int>& bloomDay, int m, int k,int mid){
          int flower=0,boquets=0;
          for(auto  x: bloomDay){
                if(x<=mid) flower++;
                else flower=0;
                if(flower==k){
                      boquets++;
                      flower=0;
                }
          }
       
        return boquets>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
          int low=1,high= *max_element(bloomDay.begin(),bloomDay.end());
          int ans=-1;
          if(bloomDay.size()<(long long)m*k) return -1;
          while(low<=high){
                int mid= low+(high-low)/2;
                if(IsPossible(bloomDay,m,k,mid)){
                       ans=mid;
                       high=mid-1;
                }
                else low=mid+1;
          }
    return ans;
    }
};