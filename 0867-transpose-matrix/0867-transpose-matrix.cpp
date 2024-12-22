class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> result(n, vector<int>(m));

        for(int j=0; j<n; j++){
            for(int i =0; i<m; i++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};