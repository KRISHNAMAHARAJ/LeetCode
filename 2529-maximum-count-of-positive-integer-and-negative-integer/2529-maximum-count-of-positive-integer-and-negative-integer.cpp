class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int neg=0, pos =0, zero=0;
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] < 0){
                neg++;
            }
            else if(nums[i] == 0) zero++;
            else break;
        }
        pos = (n-neg-zero);
        return max(pos,neg);
    }
};