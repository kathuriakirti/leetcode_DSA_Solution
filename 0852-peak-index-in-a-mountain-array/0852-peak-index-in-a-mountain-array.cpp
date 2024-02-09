class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int ans=-1,st=0,e=arr.size()-1;
         int n=arr.size();
         while(st<=e){
               int mid= st+(e-st)/2;
               if(st==e) return st;
               else if((mid-1>=0 && arr[mid]>arr[mid-1])&&(mid+1<n && arr[mid]>arr[mid+1])) return mid; 
               else if(arr[mid]<arr[mid+1]) st=mid+1;
               else e=mid-1;
         }
    return -1;
         
    }
};