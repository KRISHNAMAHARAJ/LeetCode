class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    map<int, int> mp;

    // Populate the map with counts
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }

    int h = 0;

    // Traverse the map to find duplicates
    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        if (it->second == 2) {
            h ^= it->first;
        }
    }

    return h;
}
};