class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();

        for(int i=0; i<n-1; i++){
            if(nums[i] > nums[i+1]){
                return i;
            }
        }
        return n-1;
    }
};

/*
    int findPeakElement(vector<int>& nums) {

        int left = 0, right = nums.size() - 1;
    
        while (left < right) {
            int mid = left + (right - left) / 2;
        
            if (nums[mid] > nums[mid + 1]) {
                right = mid;  
            } else {
                left = mid + 1;  
            }
        }
        return left;  // or right (both will be the same)
    }
*/