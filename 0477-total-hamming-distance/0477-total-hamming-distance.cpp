class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        int size = nums.size();
        if(size < 2) return 0;
        int ans = 0;
        int *zeroOne = new int[2];
        while(true)
        {
            int zeroCount = 0;
            zeroOne[0] = 0;
            zeroOne[1] = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] == 0) zeroCount++;
                zeroOne[nums[i] % 2]++;
                nums[i] = nums[i] >> 1;
            }
            ans += zeroOne[0] * zeroOne[1];
            if(zeroCount == nums.size()) return ans;
        }
    }
};



///////// Brute force Approach :- TLE is coming ---39/46 test cases passed only
/*
    int totalHammingDistance(vector<int>& nums) {
        
        int n= nums.size();
        int sum =0;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int count =0;
                int temp = nums[i] ^ nums[j];
                while(temp){
                    count++;
                    temp = temp & (temp-1);
                }
                sum += count;
            }
        }
        return sum;
    }
*/