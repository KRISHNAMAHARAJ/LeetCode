class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] %2 == 0){
                mp[nums[i]]++;
            }
        }
        int maxFreq =0;
        int result=-1;

        for (auto it : mp) {
            int num = it.first; 
            int freq = it.second; 

            if (freq > maxFreq || (freq == maxFreq && num < result)) {
                maxFreq = freq;
                result = num;
            }
        }
        return result;
    }
};

////// USING HASH TABLE 
/*
    int mostFrequentEven(vector<int>& nums) {
        
        const int MAX_VALUE = 100001;
        vector<int> hash(MAX_VALUE, 0);

        for(int i=0; i<nums.size(); i++){
            if(nums[i] %2 == 0){
                hash[nums[i]]++;
            }
        }
        int maxFreq =0;
        int result=-1;

        for (int i=0; i<MAX_VALUE; i += 2) {

            if (hash[i] > maxFreq) {
                maxFreq = hash[i];
                result = i;
            }
        }
        return result;
    }
*/