class Solution {
public:
    int first_idx(vector<int>& arr, int target){
           int first_idx=-1;
           int n= arr.size()-1;
           int start=0,end=n;
            while(start<=end){
                int mid = start+(end-start)/2;
                if(arr[mid]==target){
                     first_idx=mid;
                     end=mid-1;
                }
               else if(arr[mid]<target) start=mid+1;
               else end=mid-1;
           }
     return first_idx;
    }
     int last_idx(vector<int>& arr, int target){
           int last_idx=-1;
           int n= arr.size()-1;
           int start=0,end=n;
            while(start<=end){
                int mid = start+(end-start)/2;
                if(arr[mid]==target){
                     last_idx=mid;
                     start=mid+1;
                }
               else if(arr[mid]<target) start=mid+1;
               else end=mid-1;
           }
     return last_idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         int  first_index,last_index;
         first_index= first_idx(nums,target);
         last_index = last_idx(nums,target);
        return {first_index,last_index};
        
    }
};