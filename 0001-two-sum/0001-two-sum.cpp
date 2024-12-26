class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            int compliment = target - nums[i];
            if(mpp.count(compliment)){
                return {mpp[compliment], i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};



//////// USING NAIVE APPROACH TC:- O(N^2) SC:- O(1)
/*
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0; i<nums.size()-1; i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
               
                    return {i, j};
                }
            } 
        }
        return {};
    }
*/