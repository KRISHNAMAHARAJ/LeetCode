class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n=nums.size();

        int close = INT_MAX;
        int value=0;
        int result=0;
        for(int i=0; i<n; i++) {
            if(nums[i] == 0) return 0;
        }

        for(int i=0; i<n; i++) {
            
            int distance = abs(nums[i]);
            
            if(distance < close) {
                close = distance;
                value = nums[i];
                result = value;
            }
            else if(distance == close) {
                if(value > nums[i]){
                    result = value;
                }
                else {
                    result = nums[i];
                }
            }
        }
        return result;
    }
};