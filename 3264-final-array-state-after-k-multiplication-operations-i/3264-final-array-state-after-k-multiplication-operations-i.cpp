class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        while(k != 0) {
            int min=nums[0];
            int i=1, j =0;
            while(i < nums.size()){
                if(nums[i] < min){
                    min = nums[i];
                    j=i;
                }
                i++;
            }
            nums[j] = min * multiplier;
            k--;
        }
        return nums;  
    }
};