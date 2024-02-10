class Solution {
public:
    int findPivotIdx(vector<int>&arr){
         int n=arr.size();
         int st=0,e=n-1;
         while(st<=e){
               int mid= st+(e-st)/2;
               if(st==e) return st;
               else if(mid+1<n && arr[mid]>arr[mid+1]) return mid;
               else if(mid-1>=0 && arr[mid-1]>arr[mid]) return mid-1;
               else if(arr[mid]<=arr[0]) e=mid;
               else st=mid+1;
              cout<<"e: "<<e<<" ";
         }
    return -1;
    }
    int findMin(vector<int>& nums) {
         int n=nums.size();
        
         int pivotIdx= findPivotIdx(nums);
         cout<<"\npivotIdx: "<<pivotIdx;
         if(n==1) return nums[0];
         else if(n==2) return min(nums[0],nums[1]);
         else if(pivotIdx>=0 && pivotIdx<n-1) return nums[pivotIdx+1];
         else return nums[0];
    return -1;
         
    }
};