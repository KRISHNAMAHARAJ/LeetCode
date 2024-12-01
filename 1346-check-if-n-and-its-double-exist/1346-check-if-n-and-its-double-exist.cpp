class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
    unordered_set<int> seen;  // To store the elements we have seen so far

    for (int num : arr) {
        // Check if current number is half of another number we have already seen
        if (seen.count(2 * num) || (num % 2 == 0 && seen.count(num / 2))) {
            return true;
        }
        seen.insert(num);  // Insert current number into the set
    }
    return false;
}
};


/*

bool checkIfExist(vector<int>& arr) {
        
        sort(arr.begin(), arr.end());

        for(int i=0; i<arr.size()-1; i++) {
            int target= 2*arr[i];

            int left=i+1, right=arr.size()-1;
            while(left <= right){
                int mid = (left + right)/2;
                if(arr[mid] == target) return true;
                else if(arr[mid] < target) left = mid+1;
                else right = mid-1;
            }
        }
        return false;
    }

*/