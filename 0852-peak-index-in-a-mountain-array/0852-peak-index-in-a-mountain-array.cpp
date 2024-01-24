class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
          int start=0,end=arr.size()-1;
          while(start<=end){
                int mid= start+(end-start)/2;
                if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
                else if(arr[mid]>arr[mid+1]) end=mid;
                else if(arr[mid]<arr[mid+1]) start=mid+1;  
          }
        return -1;
// //         [18,29,38,59,98,100,99,98,90]
//          start=5, end=5
//         mid= 6
    }
};