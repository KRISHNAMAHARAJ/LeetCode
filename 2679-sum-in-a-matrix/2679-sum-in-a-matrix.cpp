class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        
        int rows = nums.size();
        int cols = nums[0].size();
                                        ////// Sorting each rows of a matrix
        for (int k=0; k<rows; k++) {
            sort(nums[k].begin(), nums[k].end());
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