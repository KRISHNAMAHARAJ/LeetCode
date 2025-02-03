class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int left =0, right = nums.size() -1;

        while (left < right){
            int mid = left + (right - left)/2;

            if(nums[mid] > nums[right]){  // right side
                left = mid +1; // move right
            }
            else {
                right =mid;
            }
        }
        return nums[right];
    }
};