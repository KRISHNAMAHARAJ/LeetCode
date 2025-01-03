class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++){          ///// NAIVE APPROACH TC:- O(n)
            if(nums[i] == target) return true;
        }
        return false;
    }
};


//////// USING BINARY SEARCH TC:- O(logn)
/*
    bool search(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) return true;

            if (nums[low] == nums[mid]) {
                low++;
                continue;
            }

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) high = mid - 1;
                else low = mid + 1;
            } else {
                if (nums[mid] <= target && target <= nums[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return false;
    }
*/