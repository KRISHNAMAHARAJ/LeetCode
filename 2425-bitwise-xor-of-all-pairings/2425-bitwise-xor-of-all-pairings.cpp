class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        
        int result = 0;

        // If nums2's size is odd, every element of nums1 contributes
        if (nums2.size() % 2 != 0) {
            for (int num : nums1) {
                result ^= num;
            }
        }

        // If nums1's size is odd, every element of nums2 contributes
        if (nums1.size() % 2 != 0) {
            for (int num : nums2) {
                result ^= num;
            }
        }

        return result;
    }
};


//////// Brute force :- TC:- O(m*n)
//////But TLE is coming for some test cases
/*
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        
        int result=0;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                result ^= (nums1[i] ^ nums2[j]);
            }
        }
        return result;
    }
*/