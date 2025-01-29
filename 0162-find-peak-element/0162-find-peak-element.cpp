class Solution {
public:
    int findPeakElement(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] > nums[mid + 1]) {
            right = mid;  // Move left to find peak
        } else {
            left = mid + 1;  // Move right
        }
    }
    
    return left;  // or right (both will be the same)
}

};