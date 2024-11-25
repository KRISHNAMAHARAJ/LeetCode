class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
      
        map<int, int> freqMap;

        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }
        
        int result = 0;
        for (map<int, int>::iterator it = freqMap.begin(); it != freqMap.end(); ++it) {
            if (it->second == 2) {
                result = it->first ^ result;
            }
        }
        return result;
    }
};