class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int countZero = 0;          ///// Using Brute Force but more efficient
        int product = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countZero++;
            }else{
                product *= nums[i];
            }
        }

        for(int i=0;i<nums.size();i++){
            if(countZero>1){
                nums[i]=0;
            }else if((countZero==1) && nums[i]!=0){
                nums[i]=0;
            }else if ((countZero==1) && nums[i]==0){
                
                nums[i] = product;
            }else{
                int temp = product / nums[i];
                nums[i] = temp;
            }
        }
        return nums;
    }
};



/////// Using PrefixSum/Product Concept 
/*
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> result(n,1);

        int prefixProduct =1;
        for(int i=0; i<n; i++){
            result[i] = prefixProduct;
            prefixProduct *= nums[i];
        }

        int suffixProduct =1;
        for(int i=n-1; i>=0; i--){
            result[i] *= suffixProduct;
            suffixProduct *= nums[i]; 
        }
        return result;
    }
*/