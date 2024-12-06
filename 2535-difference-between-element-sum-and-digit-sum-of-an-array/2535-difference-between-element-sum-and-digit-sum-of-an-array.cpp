class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int n=nums.size();
        int esum=0, dsum=0; 
        for(int i=0; i<n; i++){
            esum += nums[i];
            while(nums[i] > 0){
                int digit = nums[i]%10;
                dsum += digit;
                nums[i] = nums[i]/10;
            }
        }
        return (abs(esum - dsum));
    }
};