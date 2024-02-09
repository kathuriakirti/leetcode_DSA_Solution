class Solution {
public:
    int findPivotIdx(vector<int>&nums,int target){
          int n=nums.size();
          int st=0,e=n-1;
          while(st<=e){
                int mid=st+(e-st)/2;
                if(st==e) return st;
                else if(mid-1>=0 && nums[mid-1]>nums[mid]) return mid-1;
                else if(mid+1<n && nums[mid]>nums[mid+1]) return mid;
                else if(nums[mid]<=nums[0])  e=mid;
                else st=mid+1;
               cout<<"e: "<<e<<endl;
          }
    return -1;
    }
    int searchElement(vector<int>&nums,int target,int st,int e){
          while(st<=e){
                int mid= st+(e-st)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]<target) st=mid+1;
                else e=mid-1;
          }
    return -1;
    }
    int search(vector<int>& nums, int target) {
          int pivotIdx= findPivotIdx(nums,target);
          cout<<pivotIdx;
          int ans=-1,n=nums.size();
          if(target>=nums[0] && target<=nums[pivotIdx] )
                ans= searchElement(nums,target,0,pivotIdx);
          else   
                 ans= searchElement(nums,target,pivotIdx+1,n-1);
    return ans;
    }
};