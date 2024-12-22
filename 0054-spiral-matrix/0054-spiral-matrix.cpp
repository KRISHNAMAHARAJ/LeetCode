class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> result;                 ///// TC:- O(m*n) SC:- O(1)
        
        int top =0, bottom = matrix.size()-1;      ///// for ROW
        int left =0, right = matrix[0].size()-1;    //// for COLUMN

        while(top <= bottom && left <= right){

            //// Traversing the Top Row
            for(int j=left; j<= right; j++){
                result.push_back(matrix[top][j]);
            }
            top++;

            //// Traversing the Right Column
            for(int i=top; i<= bottom; i++){
                result.push_back(matrix[i][right]);
            }
            right--;

            //// Traversing bottom row (if valid)
            if(top <= bottom){
                for(int j = right; j>=left; j--){
                    result.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            //// Traversing the left column (if valid)
            if(left <= right){
                for(int i = bottom; i>=top; i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};