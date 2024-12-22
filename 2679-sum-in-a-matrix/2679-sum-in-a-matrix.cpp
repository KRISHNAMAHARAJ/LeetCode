class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        int rows = nums.size();
        int cols = nums[0].size();

        for (auto& row : nums) {
            sort(row.begin(), row.end(), greater<int>());
        }
        
        int sum =0;

        for(int j=0; j<cols; j++){
            int maxm = nums[0][j];
            for(int i=1; i<rows; i++){
                maxm = max(maxm, nums[i][j]);
            }
            sum = sum + maxm;
        }
        return sum;
    }
};