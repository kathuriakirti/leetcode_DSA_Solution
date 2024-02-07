class Solution {
public:
    void array_reverse(vector<int>&nums,int st,int e){
          while(st<e){
                swap(nums[st],nums[e]);
                st++;e--;
          }
    }
    void rotate(vector<int>& nums, int k) {
       
        int n=nums.size();
         k=k%n;
        array_reverse(nums,0,n-1);
        array_reverse(nums,0,k-1);
        array_reverse(nums,k,n-1);
        
    }
};