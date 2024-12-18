class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n= prices.size();
        vector<int> result;

        for(int i=0; i<n; i++){
            int val = prices[i];
            bool discountApplied = false;

            for(int j=i+1; j<n; j++){
                if(prices[j] <= val){
                    result.push_back(val - prices[j]);
                    discountApplied = true; 
                    break;
                }   
            }
            if(!discountApplied){
                result.push_back(val);
            }  
        }
        return result;
    }
};