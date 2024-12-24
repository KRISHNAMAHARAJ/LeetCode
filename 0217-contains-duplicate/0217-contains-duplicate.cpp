class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;
        for (int i = 0; i < nums.size(); i++) {
            if (seen.count(nums[i])) {
                return true; 
            }
            seen.insert(nums[i]);
        }
        return false; 
    }
};


///////// USING SORTING TC:- O(nlogn) SC:- O(n)

/*
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;        
    }
*/


/////// USING LENGTH OF THE SET TC:- O(n) and SC:- O(n)

/*
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        return numSet.size() < nums.size();        
    }
*/
