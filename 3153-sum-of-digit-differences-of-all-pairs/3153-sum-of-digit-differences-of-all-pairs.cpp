class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        
        int n=nums.size();
        long long sum =0;

        int arr[10][10];

        for(auto num : nums){
            int rowIndex =0;
            while(num!=0){

                int rem = num%10;
                int colIndex = rem;
                arr[rowIndex][colIndex]++;
                num/=10;
                rowIndex++;
            }
        }

        for(int row=0; row<10; row++){
            for(int col=0; col<10; col++){
                sum = sum + (arr[row][col] * 1l *(n - arr[row][col]));
            }
        }
        return sum/2;
    }
};



//////////// TLE is coming, 632/643 testcases passed only
/*
    long long sumDigitDifferences(vector<int>& nums) {
        
        int n=nums.size();
        int sum =0;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int temp1 = nums[i], temp2 = nums[j];
                while(temp1 > 0){
                    if((temp1 % 10) != (temp2 % 10)){
                        sum++;
                    }
                    temp1 /= 10;
                    temp2 /= 10;
                }
            }
        }
        return sum;
    }
*/