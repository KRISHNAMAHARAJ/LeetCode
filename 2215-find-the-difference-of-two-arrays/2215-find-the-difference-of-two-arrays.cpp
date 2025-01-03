class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        vector<vector<int>> answer(2);

        unordered_set<int> st1(nums1.begin(), nums1.end());
        unordered_set<int> st2(nums2.begin(), nums2.end());

        for(int element : st1){
            if(st2.find(element) == st2.end()){
                answer[0].push_back(element);
            }
        }
        for(int element : st2){
            if(st1.find(element) == st1.end()){
                answer[1].push_back(element);
            }
        }
        return answer;
    }
};