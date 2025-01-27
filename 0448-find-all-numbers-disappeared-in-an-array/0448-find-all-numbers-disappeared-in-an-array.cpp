class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            int element = abs(nums[i]);
            int seat = element - 1;
            if(nums[seat] > 0){
                nums[seat] = -nums[seat];
            }
        }
        for(int i=0; i<n; i++){
            if(nums[i] > 0){
                result.push_back(i+1);
            }
        }
        

        return result;
    }
};



/////// Using HashSet TC:- O(n) and SC:- O(n) due to using extra space of lookup table
/*
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result;

        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(int i =1; i<=n; i++){
            if(st.find(i) == st.end()){
                result.push_back(i);
            }
        }

        return result;
    }
*/



//////// Using BRUTE FORCE :- TC:- O(n^2) SC:- O(1)
// Some test cases didn't pass 31/35 testcases passed only
/*
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result;

        for(int i=1; i<=n; i++){
            bool found = false;
            for(int j=0; j<n; j++){
                if(i == nums[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                result.push_back(i);
            }
        }
        return result;
    }
*/

