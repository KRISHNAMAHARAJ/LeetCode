class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int left =0, right = arr.size()-1;
                                            //// BInary Approach TC:- O(logn)
        while(left < right){
            int mid = left + (right - left)/2;

            if(arr[mid] > arr[mid+1]){
                right = mid;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};


///// Linear Approach TC:- O(n)
/*
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int i=0;
        while(arr[i] < arr[i+1]){
            i++;
        }
        return i;
    }
*/
