class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int n = nums.size();
        int minNum = INT_MAX;
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int digitSum = 0;
            while(temp > 0){
                digitSum += temp % 10;
                temp /= 10;
            }
            nums[i] = digitSum;
            minNum = min(minNum, digitSum);
        }
        return minNum;
    }
};