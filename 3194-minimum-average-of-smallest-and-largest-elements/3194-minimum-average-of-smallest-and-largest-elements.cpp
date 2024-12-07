class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        int n= nums.size();
        vector<long double> answers;

        sort(nums.begin(), nums.end());
        int left =0, right=n-1;
        long double min_avg = DBL_MAX;

        while(left < right){
            long double avg = (nums[left] + nums[right])/2.0;
            answers.push_back(avg);
            min_avg = min(min_avg, avg);
            left++;
            right--;
            
        }
        return min_avg;
    }
};