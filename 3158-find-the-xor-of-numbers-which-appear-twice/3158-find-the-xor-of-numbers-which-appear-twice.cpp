class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
    map<int,int> mp;
    for(auto it:nums){
        mp[it]++;
    }
    int h=0;    
    for(auto it:mp){
        if(it.second==2){ 
                h^=it.first;
        }
    }
    return h;
    }
};