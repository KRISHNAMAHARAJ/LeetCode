class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
           
        sort(nums.begin(), nums.end());
        int cand = 1;
        for(int i=0; i< n; i++){
            if(nums[i] > cand){
                return cand;
            }
            else if(nums[i] == cand){
                cand++;
            }
        }
        return cand;
    }
};




///////3rd Method:-  Using Hash Set TC:- O(n) and SC:- O(n) here extra space is used.
/*
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        unordered_set<int> st;

        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        for(int i = 1; i<=n+1; i++){
            if(st.find(i) == st.end()){
                return i;
            }
        }
        return n+1;    
    }
*/




////////1st method:- Using BRUTE FORCE TC:- O(n^2). But for large no.s of input it is difficult to process. So, its giving TLE. Only 172/178 test cases passed. 
/*
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 1; i<=n+1; i++){
            bool found = false;
            for(int j=0; j<n; j++){
                if(nums[j] == i){
                    found = true;
                    break;
                }
            }
            if(!found){
                return i;
            }  
        }
        return n+1;
    }
*/

/*
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
    
    // Place each number at its correct index if possible
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            swap(nums[i], nums[nums[i] - 1]);
        }
    }
    
    // Find the first missing positive number
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
    
    // If all numbers are in their correct places, return n + 1
    return n + 1;
    }
*/