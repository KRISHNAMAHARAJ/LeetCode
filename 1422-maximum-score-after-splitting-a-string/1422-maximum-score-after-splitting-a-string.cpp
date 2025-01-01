class Solution {
public:
    int maxScore(string s) {
                                            //// TC:- O(n^2) SC:- O(1) 
        int score =0, result=0;

        for(int i=0; i<s.length()-1; i++){
            int zero_cnt = 0;
            int one_cnt = 0;

            for(int j=0; j<=i; j++){
                if(s[j] == '0'){
                    zero_cnt++;
                }
            }
            for(int j = i+1; j<s.length(); j++){
                if(s[j] == '1'){
                    one_cnt++;
                }
            }
            score = zero_cnt + one_cnt;
            result = max(result, score);
        }
        return result;
    }
};


/////// Using Prefix sum  TC:- O(n) SC:- O(1)
/*
    int maxScore(string s) {
    int totalOnes = 0;
    for (char c : s) {
        if (c == '1') totalOnes++; // Count total number of ones
    }

    int countZeros = 0, countOnesSoFar = 0, maxScore = 0;

    // Iterate through the string but stop before the last character
    // Ensure split doesn't leave an empty right substring

    for (int i = 0; i < s.length() - 1; i++) { 
        if (s[i] == '0') {
            countZeros++;
        } else {
            countOnesSoFar++;
        }
        
        // Calculate score for the current split
        int currentScore = countZeros + (totalOnes - countOnesSoFar);
        maxScore = max(maxScore, currentScore);
    }

    return maxScore;
}

*/