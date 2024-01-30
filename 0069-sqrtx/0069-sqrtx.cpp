class Solution {
public:
    int mySqrt(int x) {
          int start=0,end=x-1;
        if(x==1) return 1;
          while(start<=end){
                long long mid= start+(end-start)/2;
                long long square= mid*mid;
                if(square==x) return mid;
                else if(square>x) end=mid-1;
                else start=mid+1;
          }
    return x==0?0:start-1;
    }
};