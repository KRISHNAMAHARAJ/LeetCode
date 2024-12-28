class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;                 ///// TC:- O(n+m) SC:- O(k1+k2
        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        for(int num : st1){
            if(st2.count(num)){
                result.push_back(num);
            }
        }
        return result;
    }
};

// Above are also same logic

//////// USING set  TC:- O(n+m) SC:- O(n+min(n,m))
/*
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        unordered_set<int> st;

        for(int i=0; i<nums1.size(); i++){
            st.insert(nums1[i]);
        }

        for(int i=0; i<nums2.size(); i++){
            if(st.find(nums2[i]) != st.end()){
                result.push_back(nums2[i]);
                st.erase(nums2[i]);
            }
        }
        return result;
    }
*/