class Solution {
public:
    void merge(vector<int>&ans,vector<int>&nums,int st, int e){
            int mid = (st+e)/2;
            // compare left subarrays with right subarrays
            int k=st,leftIdx=st,rightIdx=mid+1;
            while(leftIdx<=mid && rightIdx<=e){
                   if(nums[leftIdx]<nums[rightIdx]){
                         ans[k] = nums[leftIdx];
                         leftIdx++;
                   }
                   else{
                         ans[k] = nums[rightIdx];
                         rightIdx++;
                   }
                  k++;
            }
           // left subarray not completed
           while(leftIdx<=mid){
                 ans[k] = nums[leftIdx];
                  leftIdx++;
                 k++;
           }
           // right subarray not completed
           while(rightIdx<=e){
                  ans[k] = nums[rightIdx];
                  rightIdx++;
                  k++;
           }
          for(int i=st;i<=e;i++){
                nums[i] = ans[i];
          }
    }
    void mergeSort(vector<int>&ans,vector<int>&nums,int st, int e){
           // base case
           if(st>=e) return;
           int mid = (st+e)/2;
           // left subarray call
           mergeSort(ans,nums,st,mid);
           // right subarray call
           mergeSort(ans,nums,mid+1,e);
           // merge in ans array
           merge(ans,nums,st,e);
    }
    vector<int> sortArray(vector<int>& nums) {
           int size = nums.size();
           vector<int>ans(size);
           mergeSort(ans,nums,0,size-1);
          return ans;
    }
};