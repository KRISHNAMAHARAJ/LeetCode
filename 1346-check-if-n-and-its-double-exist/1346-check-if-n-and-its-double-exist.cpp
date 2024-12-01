class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            int target = 2 * arr[i];
            for (int j = 0; j < arr.size(); j++) {
                if (i != j && arr[j] == target) {
                    return true;
                }
            }
        }
        return false;
    }

};


/*

bool checkIfExist(vector<int>& arr) {
    unordered_set<int> seen;  

    for (int num : arr) {
        
        if (seen.count(2 * num) || (num % 2 == 0 && seen.count(num / 2))) {
            return true;
        }
        seen.insert(num);  
    }
    return false;
}

*/
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