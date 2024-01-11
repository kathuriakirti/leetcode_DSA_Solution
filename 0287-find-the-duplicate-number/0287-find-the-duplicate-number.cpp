class Solution {
public:
    int negative_marking(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]);
            if (nums[index] < 0)
                return index;
            else {
                nums[index] *= -1;
            }
        }
        return -1;
    }
    int swap_element(vector<int>& nums) {
        while (nums[0] != nums[nums[0]]) {
            swap(nums[0], nums[nums[0]]);
        }
        return nums[0];
    }
    int findDuplicate(vector<int>& nums) {
        return negative_marking(nums);
        // swap elements to its associated index
        // return swap_element(nums);
    }
};