class Solution {
public:
    int missingNumber(vector<int>& nums) {

      /*  
       int N = nums.size() +1;

       int sum = (N*(N+1))/2;

       int arr_sum = 0;
       for(int i = 0; i<nums.size(); i++) {
            arr_sum += nums[i];
       }
       return arr_sum;

       int missingNum = sum - arr_sum;

       return missingNum;
*/

/*
    int N = nums.size() ;

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N; i++) {
        xor2 = xor2 ^ nums[i]; // XOR of array elements
        xor1 = xor1 ^ i; //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
*/
    
        int res = nums.size();
        
        for (int i = 0; i < nums.size(); i++) {
            res += i - nums[i];
        }
        
        return res; 
    }     
};


////// Using Binary Search after Sorting the array TC:- O(nlogn)
/*
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]>mid)
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
*/