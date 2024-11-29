class Solution {
public:
    int searchInsert(vector<int>& nums, int target) { 
        int n=nums.size();

////////////////IN O(N) time /////////////
/*
        for(int i=0; i<n; i++){
            if(nums[i] >= target) return i;
        }
        return n;
*/

        int left = 0, right =n-1;
        int mid=0;
        while(left <= right) {
            int mid= (left+right) / 2;

            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) left = mid + 1;
            else right = mid -1;
        }
        return left; 
    }
};