class Solution {
public:
    void temp_arr(vector<int>& nums, int k){
           int n= nums.size();
            vector<int>temp_array(k);
           for(int i=0;i<k&&i<n;i++){
                   temp_array[i]=nums[n-i-1];
           }
         reverse(temp_array.begin(),temp_array.end());
         for(int i=n-1;i>=k;i--){
               nums[i]=nums[i-k];
         }
         for(int i=0;i<k;i++){
               nums[i]=temp_array[i];
         }
    }
    void rotate(vector<int>& nums, int k) {
          k=k%nums.size();
          temp_arr(nums,k);
    }
};