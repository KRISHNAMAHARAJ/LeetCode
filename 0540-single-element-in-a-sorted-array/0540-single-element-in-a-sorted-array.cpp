class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};



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