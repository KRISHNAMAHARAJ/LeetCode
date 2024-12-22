class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        int i =0, j=n-1;

        while(i<m && j>=0){
                        /// Starting from the top right Corner
            if(matrix[i][j] == target) return true;

            else if(matrix[i][j] > target){
                j--;     /// Move Left
            }
            else {
                i++;    /// Move Down
            }        
        }
        return false;
    }
};
  

/////////// USING NAIVE APPROACH TC:- O(n*m) 
/*
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();         
                                            //// TC:- O(n*m) 
        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }
*/