class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> result;
        int n1=nums1.size(), n2=nums2.size();
        int i=0, j=0;
                                    ///// here is Time/Space Complexity:- O(n1+n2) 
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
    }
};


//////// Without Merging both Arrays and optimizing Space Complexity:- O(1) and Tc will remain same
/*

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size(), n2 = nums2.size();
    int total = n1 + n2;
    int mid1 = (total - 1) / 2;  // First middle element (for both even and odd cases)
    int mid2 = total / 2;        // Second middle element (for even-length case)
    
    int i = 0, j = 0, count = 0;
    int current = 0, prev = 0;
    
    while (count <= mid2) {
        prev = current;  // Store the previous element
        if (i < n1 && (j >= n2 || nums1[i] < nums2[j])) {
            current = nums1[i++];
        } else {
            current = nums2[j++];
        }
        count++;
    }
    
    if (total % 2 == 0) {
        return (prev + current) / 2.0;  // Average of two middle elements
    } else {
        return current;  // Middle element
    }
}

*/