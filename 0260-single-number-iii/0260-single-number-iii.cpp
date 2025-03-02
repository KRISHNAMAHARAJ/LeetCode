class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) { 

        int xor1 = 0;           ///// Using Bitwise XOR concept TC:-O(n) and SC:- O(1) 
        for(int num : nums){
            xor1 ^= num;
        }

        int rightmost_set_Bit = xor1 & -(unsigned int)xor1;

        int a=0, b=0;
        for(int num: nums){
            if(num & rightmost_set_Bit){
                a ^= num;
            }
            else {
                b ^= num;
            }
        }
        return {a, b};
    }
};


////////////// Using Frequency map TC:- O(n) and also SC:- O(n)
/*
    vector<int> singleNumber(vector<int>& nums) { 
        
        unordered_map<int, int> freq;
        for (int n : nums) {
            freq[n]++;
        }

        vector<int> res;
        for (auto& pair : freq) {
            if (pair.second == 1) {
                res.push_back(pair.first);
            }
        }

        return res;
    }
*/