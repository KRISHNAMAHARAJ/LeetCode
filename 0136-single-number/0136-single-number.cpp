class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }

        for(auto it : mpp){
            if(it.second == 1){
                return it.first;
            }
        }
        return -1;
    }
};

/*
    int singleNumber(vector<int>& nums) {
        
        int result=0;
        for(int i=0; i<nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
*/
    