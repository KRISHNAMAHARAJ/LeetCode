class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count=0;
        int result=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                count++;
            }
            else {
                result = max(count, result);
                count =0;
            }  
        }
        result = max(count, result);
        return result;
    }
};