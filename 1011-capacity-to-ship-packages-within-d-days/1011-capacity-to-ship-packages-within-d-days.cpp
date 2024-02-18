class Solution {
public:
    bool leastWeightCapacity(vector<int>& weights, int days,int capacity){
         int weightSum=0,day_count=1;
         for(auto x:weights){
               weightSum+=x;
               if(weightSum>capacity){
                     weightSum=x;
                     day_count++;
               }
               if(x>capacity) return false;
         }
        cout<< day_count<<endl;
        return day_count<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
          int low=*min_element(weights.begin(),weights.end());
          int sum=0;
          for(int x:weights) sum+=x;
          int high=sum;
          int ans=-1;
          while(low<=high){
                int mid= low+(high-low)/2;
                if(leastWeightCapacity(weights,days,mid)){
                      ans=mid;
                      high=mid-1;
                }
              else low=mid+1;
          }
        return ans;
    }
};