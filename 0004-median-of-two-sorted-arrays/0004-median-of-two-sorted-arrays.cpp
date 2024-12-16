class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        int n1=nums1.size(), n2=nums2.size();
        int i=0, j=0;

        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                result.push_back(nums1[i++]);
            }
            else {
                result.push_back(nums2[j++]);
            }
        }
        while(i<n1){
            result.push_back(nums1[i++]);
        }
        while(j<n2){
            result.push_back(nums2[j++]);
        }

        int k = result.size();
        int mid = k/2;
        if(k % 2 != 0){
            return result[mid];
        }
        else {
            return ((result[mid-1] + result[mid])/2.0);
        }
        return -1;
    }
};