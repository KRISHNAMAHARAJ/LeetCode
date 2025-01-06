class Solution {
public:
    string triangleType(vector<int>& nums) {
        // Sort the array to make comparison easier
        sort(nums.begin(), nums.end());
    
        // Check if it can form a triangle
        if (nums[0] + nums[1] <= nums[2]) {
            return "none";  // Not a valid triangle
        }
    
        // Classify the triangle
        if (nums[0] == nums[1] && nums[1] == nums[2]) {
            return "equilateral";  // All sides are equal
        } 
        else if (nums[0] == nums[1] || nums[1] == nums[2]) {
            return "isosceles";  // Exactly two sides are equal
        } 
        else {
            return "scalene";  // All sides are different
        }
    }

};