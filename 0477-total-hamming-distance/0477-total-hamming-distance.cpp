class Solution {
public:
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
};