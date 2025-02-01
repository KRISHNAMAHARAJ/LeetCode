class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int left =1, right = arr.size()-2;      /// Take care here
                                            //// BInary Approach TC:- O(logn)
        while(left <= right){
            int mid = left + (right - left)/2;

            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;
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
