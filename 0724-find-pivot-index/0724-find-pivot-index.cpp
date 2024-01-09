class Solution {
public:
    int bruteforce(vector<int>&nums){
            int n= nums.size();
            for(int i=0;i<n;i++){
                    int lsum=0,rsum=0;
                    for(int j=0;j<i;j++){
                            lsum+=nums[j];
                    }
                    for(int k=i+1;k<n;k++){
                            rsum+=nums[k];
                    }
                    if(lsum==rsum) return i;
            }
    return -1;
    }
    int better_sol(vector<int>nums){
             int n=nums.size();
             vector<int>lsum(n,0);
             vector<int>rsum(n,0);
             for(int i=1;i<n;i++){
                   lsum[i]= lsum[i-1]+nums[i-1];
             }
             for(int j=n-2;j>=0;j--){
                   rsum[j]= rsum[j+1]+nums[j+1];
             }
             for(int i=0;i<n;i++){
                    if(lsum[i]==rsum[i]) return i;
             }
    return -1;
    }
    int optimal_sol(vector<int>nums){
             int n=nums.size();
             int total=0;
             for(int i=0;i<n;i++){
                   total+=nums[i];
             }
             int lsum=0;
             for(int i=0;i<n;i++){
                   int rsum=total-lsum-nums[i];
                   if(rsum==lsum) return i;
                   lsum+=nums[i];
             }
    return -1;
         
    }
    int pivotIndex(vector<int>& nums) {
        //  return bruteforce(nums); 
        // return better_sol(nums);
        return optimal_sol(nums);
    }
};