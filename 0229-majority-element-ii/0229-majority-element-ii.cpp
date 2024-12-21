class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int, int> mp;
        int n= nums.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto it: mp){
            if(it.second > (n/3)){
                result.push_back(it.first);
            }
        }
        return result;
    }
};


////////// By this method Using Moore Voting algorithm TC:- O(n) and SC:- O(1)
/*

    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;
        
        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            
            if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }

*/