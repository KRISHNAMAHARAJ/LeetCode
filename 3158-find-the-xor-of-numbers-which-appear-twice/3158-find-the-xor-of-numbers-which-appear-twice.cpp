class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    map<int,int> mp;
    for(auto it:nums){
        mp[it]++;
    }
    int r=0;    
    for(auto it:mp){
        if(it.second==2){ 
            r ^=it.first;
        }
    }
    return r;
    }
};