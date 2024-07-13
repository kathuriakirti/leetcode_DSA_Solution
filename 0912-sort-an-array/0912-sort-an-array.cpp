class Solution {
public:
   void merge(vector<int>&nums, int st, int e,vector<int>&temp){
          
         
          int mid= (st+e)/2;
          int leftIdx =st, rightIdx=mid+1, mainIdx=st;
          while(leftIdx<=mid && rightIdx<=e){
                if(nums[leftIdx]<nums[rightIdx]) {
                      temp[mainIdx] =nums[leftIdx++];
                     
                }
                else{
                       temp[mainIdx] =nums[rightIdx++];
                       
                }
                mainIdx++;
          }
         while(leftIdx<=mid){
               temp[mainIdx] =nums[leftIdx];
                leftIdx++;
               mainIdx++;
         }
         while(rightIdx<=e){
               temp[mainIdx] =nums[rightIdx];
               rightIdx++;
               mainIdx++;
         }
        for(int i=st;i<=e;i++) nums[i] = temp[i];
       
    }
    void mergeSort(vector<int>& nums, int st, int e,vector<int>& temp){
          // base condition
          if(st>=e) return;
          int mid = (st+e)/2;
          mergeSort(nums,st,mid,temp);
          mergeSort(nums,mid+1,e,temp);
          merge(nums,st,e,temp);
    }
    vector<int> sortArray(vector<int>& nums) {
          vector<int>temp(nums.size());
          mergeSort(nums,0,nums.size()-1,temp);
          return nums;
    }
};