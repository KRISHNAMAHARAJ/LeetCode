class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low =0, high = nums.size() - 1;

        while(low<high)
        {
            while(low<high && nums[low]==nums[high]) high--;
            //Removal of Duplicates
            int mid=low+(high-low)/2;
            if(nums[mid]>nums[high])low=mid+1;
            else high=mid;
        }
        return nums[low];  
    }
};