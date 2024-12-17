class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
        map<int, int> mp;         /////// Using this method TC:- O(nlogn) and SC:- O(n)
        
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
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
