class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
    
    // Place each number at its correct index if possible
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    // Find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    // If all numbers are in their correct places, return n + 1
    return n + 1;
    }
};