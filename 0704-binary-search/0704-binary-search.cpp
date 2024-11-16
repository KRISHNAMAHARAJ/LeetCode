class Solution {
public:

////////////////ITERATIVE Approach///////////
/*
    int search(vector<int>& nums, int target) {
        
        int n= nums.size();

        int low=0, high=n-1;
        while(low <= high) {
            int mid = (low + high)/2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target){
                low = mid +1;
            }
            else {
                high = mid -1;
            }
        }
        return -1;
    }
*/

    ////////////RECURSIVE Approach/////////////

    int binaryRecursearch(vector<int>& nums, int target, int low,  int high) {
        
        if(low > high) {
            return -1;
        }
        int mid = (low + high)/2;

        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] < target) {
            return binaryRecursearch(nums, target, mid+1, high);
        }
        else{
            return binaryRecursearch(nums, target, low, mid-1);
        }
    }

    int search(vector<int>& nums, int target) {

        int n= nums.size();
        return binaryRecursearch(nums, target, 0,  n-1);
    }
};