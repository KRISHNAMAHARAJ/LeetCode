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