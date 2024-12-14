class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int left=0, right = nums.size() -1;

        while(left < right){
            int mid = (left + right)/2;
            
            // Ensure mid is even to compare pairs
            if (mid % 2 == 1) mid--;  // Make sure mid is even

            // If the pair is correct, move to the right half
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2;
            } else {
            // Otherwise, move to the left half
                right = mid;
            }
        }
        return nums[left];  // The single element
    }
};

////// Above method BINARY SEARCH TC:- O(logn) and SC:- O(1)



//////// USING XOR METHOD TC:- O(n) and SC:- O(1)
/*
    int singleNonDuplicate(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
*/



/////////// USING MAP STL TC:- O(nlogn) and SC:- O(n) 
/*
    int singleNonDuplicate(vector<int>& nums) {
        
        map<int, int> mp;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
*/