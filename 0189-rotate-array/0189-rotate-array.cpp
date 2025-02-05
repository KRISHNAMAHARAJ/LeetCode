class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k = k%n;
        
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};



///// Using reverse function TC:- O(n) and SC:- O(1)
/*
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();
        k = k%n;
        
        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
*/


////// Using Extra Space TC:- O(n) and SC:- O(n)
/*
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        int temp[n];
        int i,j;
        k = k%n;
        for(i=n-k, j=0; i<n, j<k; i++, j++) {
            temp[j] = nums[i];
        }
        for(i=0, j=k ; i<n-k, j<n; i++, j++) {
            temp[j] = nums[i]; 
        }
        for(i=0; i<n; i++) {
            nums[i] = temp[i];
        }
    }
*/