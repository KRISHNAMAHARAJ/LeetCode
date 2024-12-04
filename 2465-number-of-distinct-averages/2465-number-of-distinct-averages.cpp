class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        unordered_set<float> st;

        float first =0, last=0, avg=0;
        while(nums.size() > 0) {
            first = nums[0];
            last = nums[nums.size() - 1];
            nums.erase(nums.begin());
            nums.pop_back();
            avg = (first + last)/2;
            st.insert(avg);
        }
        return st.size();
    }
};