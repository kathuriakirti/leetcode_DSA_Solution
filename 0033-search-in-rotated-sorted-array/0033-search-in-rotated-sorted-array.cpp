class Solution {
public:
     int FindPivotIndex(vector<int>num, int target) {
         int left = 0, right = num.size() - 1;
         int n=num.size();
         while (left <= right) {
             int mid = left + (right - left) / 2;
             if(left==right) return left;
             if (mid-1>=0 && num[mid] < num[mid - 1]) {
                 return mid - 1;
             } else if (mid+1<n && num[mid] > num[mid + 1]) {
                 return mid;
             } else if (num[mid]<num[0]) {
                 right = mid - 1;
             } else {
                 left = mid + 1;
             }
         }
         return -1;
     }
     int search_element(vector<int>num, int target, int left, int right) {
         while (left <= right) {
             int mid = left + (right - left) / 2;
             if (num[mid] == target) {
                 return mid;
             } else if (num[mid] < target) {
                 left = mid + 1;
             } else {
                 right = mid - 1;
             }
         }
         return -1;
     }
     int search(vector<int>& num, int target) {
         int pivotIndex = FindPivotIndex(num, target);
         int n = num.size();
         int ans = -1;
         if (n == 1) {
             if (target == num[0]) {
                 ans=0;
             }
         } 
          else if (target >= num[0] && target <= num[pivotIndex]) {
             ans = search_element(num, target, 0, pivotIndex);
         } else {
             ans = search_element(num, target, pivotIndex + 1, n - 1);
         }
         return ans;
     }
};