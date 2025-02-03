class Solution {
public:
    bool search(std::vector<int>& nums, int target) {

        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) return true;

        ///This is the case for handling duplicate values rest all are same like q.no.33
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }

            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums[high]) {
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
        return false;
    }
};

/////NAIVE APPROACH;- USing Linear Search TC:- O(n)
/*
    bool search(vector<int>& nums, int target) {
        
        for(int i=0; i<nums.size(); i++){          
            if(nums[i] == target) return true;
        }
        return false;
    }
*/
