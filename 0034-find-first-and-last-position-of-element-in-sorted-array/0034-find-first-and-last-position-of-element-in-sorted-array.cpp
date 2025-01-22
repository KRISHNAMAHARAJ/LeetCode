class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> result(2, -1);
        int start = -1, end = -1;       //Using Binary Search TC:- O(logn) and SC:- O(1)

        int left =0, right = n-1;       // Searching leftbound 
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                start = mid;
                right = mid-1; 
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else {
                right = mid -1;
            } 
        }
        result[0] = start;


        left =0, right = n-1;           // searching rightbound
        while(left <= right){
            int mid = (left + right)/2;
            if(nums[mid] == target){
                end = mid;
                left = mid+1; 
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else {
                right = mid -1;
            }
        }
        result[1] = end;

        return result;
    }

};



//////////// USING BRUTE FORCE TC:- O(n) and SC:- O(1)
/*
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
    
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                if (first == -1) first = i;
                last = i;
            }
        }
        return {first, last};
    }
*/
