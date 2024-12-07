class Solution {
public:
    double average(vector<int>& salary) {
        
        int n=salary.size();
        double sum=0;
        int minm = INT_MAX, maxm = INT_MIN;

        for(int i=0; i<n; i++){
            minm = min(minm, salary[i]);
            maxm = max(maxm, salary[i]);
            sum += salary[i];
        }
        sum = sum - minm - maxm;
        return sum/(n-2);
    }
};


//////////// NOW, in O(nlogn) Time Complexity //////////
////This is basic approach.
/*
double average(vector<int>& salary) {
        
        int n=salary.size();
        sort(salary.begin(), salary.end());

        double sum=0;
        for(int i=1; i<n-1; i++){
            sum += salary[i];
        }
        return sum/(n-2);
    }
*/