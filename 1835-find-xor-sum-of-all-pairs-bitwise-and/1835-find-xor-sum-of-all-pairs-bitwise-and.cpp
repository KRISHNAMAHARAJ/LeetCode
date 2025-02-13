class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        
        int arr1xorSum =0;
        for(int i=0; i<arr1.size(); i++){
            arr1xorSum ^= arr1[i];
        }

        int arr2xorSum =0;
        for(int i=0; i<arr2.size(); i++){
            arr2xorSum ^= arr2[i];
        }

        return (arr1xorSum & arr2xorSum);
    }
};