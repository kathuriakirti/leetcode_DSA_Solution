class Solution {
public:
    void temp_arr(vector<int>& nums, int k){
           int n= nums.size();
            vector<int>temp_array(k);
           for(int i=0;i<k;i++){
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
    void reverse_method(vector<int>& nums, int k){
          int n=nums.size();
           k=k%n;
          int left=0,right=nums.size()-1;
          while(left<right){
                 swap(nums[left],nums[right]);
                 left++; right--;
          }
         left=0,right=k-1;
        while(left<right){
                swap(nums[left],nums[right]);
                 left++; right--;
        }
        left=k, right=n-1;
        while(left<right){
               swap(nums[left],nums[right]);
               left++; right--;
        }
    }
    void modulus(vector<int>& nums, int k){
           int n= nums.size();
           vector<int>ans(n);
           for(int index=0;index<n;index++){
                  int new_index=  (index+k)%n;
                  ans[new_index]=nums[index];
           }
         nums=ans;
    }
    void rotate(vector<int>& nums, int k) {
          // k=k%nums.size();
          // temp_arr(nums,k);
          // modulus(nums,k);
          reverse_method(nums,k);
    }
};