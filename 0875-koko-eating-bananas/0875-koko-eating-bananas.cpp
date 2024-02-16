class Solution {
public:
    bool minSpeed(vector<int>& piles, int h,long long mid){
         long long actual_hour=0;
         for(auto x: piles){
               actual_hour+=x/mid;
               if(x%mid!=0) actual_hour++;
         }
        return actual_hour<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
          int low=1,high=*max_element(piles.begin(),piles.end()),ans;
          while(low<=high){
               long long mid=(long long)low+(high-low)/2;
               if(minSpeed(piles,h,mid)) high=mid-1;
               else low=mid+1;
          }
    return low;
    }
};