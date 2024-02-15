class Solution {
public:
   bool canEatBananas(vector<int>&piles,long long mid,int h){
         long long actual_hour=0;
         for(int x:piles){
              actual_hour+=x/mid;
              if(x%mid!=0) actual_hour++;
         }
        return actual_hour<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(begin(piles),end(piles));
        while(low<=high){
            long long mid= low+(high-low)/2;
            if(canEatBananas(piles,mid,h)) high=mid-1;
            else low=mid+1;
        }
    return low;
    }
};