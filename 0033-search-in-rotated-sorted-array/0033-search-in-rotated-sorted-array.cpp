 class Solution {
public:
    int FindPivotIndex(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        
        return left;
    }
    
    int binarySearch(vector<int>& nums, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 0) return -1;
        
        int pivotIndex = FindPivotIndex(nums);
        
        if (pivotIndex == 0 || target < nums[0]) {
            return binarySearch(nums, target, pivotIndex, n - 1);
        } else {
            return binarySearch(nums, target, 0, pivotIndex - 1);
        }
    }
};