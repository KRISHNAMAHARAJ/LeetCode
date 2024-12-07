class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        int n= nums.size();
        vector<float> answers;

        sort(nums.begin(), nums.end());
        int left =0, right=n-1;
        double min_avg = DBL_MAX;

        while(left < right){
            double avg = (nums[left] + nums[right])/2.0;
            answers.push_back(avg);
            min_avg = min(min_avg, avg);
            left++;
            right--;
            
        }
        return min_avg;
    }
};