class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        for(int i = n - 1; i > 0; i--) {
            pref[i] ^= pref[i - 1];
        }
        return pref;
    }
};

/*
    vector<int> findArray(vector<int>& pref) {
        
        int n= pref.size();         // TC:- O(n) and SC:- O(n) if resultant array counts.
        vector<int> arr(n,0);

        arr[0] = pref[0];
        for(int i=1; i<n; i++){
            arr[i]= pref[i-1] ^ pref[i];
        }
        return arr;
    }
*/

