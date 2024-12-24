class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();

        int sum=0;
        for(int i=0, j=0; i<n, j<m; i++, j++){

            if(i == j){
                sum += mat[i][j];
            }
        }
        for(int i=0, j=n-1; i<m, j>=0; i++, j--){
            sum += mat[i][j];
        }

        if(m % 2 != 0){
            sum -= mat[m/2][n/2];
        }
        return sum;
    }
};


///////// instead of writing line no. 9 to 17 write these two lines here n = mat.size()
/* 
    for (int i = 0; i < n; i++) {
            result += mat[i][i] + mat[i][n - i - 1];
        }
*/