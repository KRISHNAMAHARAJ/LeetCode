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