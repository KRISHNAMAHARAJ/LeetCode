class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        int n= prices.size();
        vector<int> result;
                                    //////// THis method has TC:- O(n^2) and SC:- O(n)
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



///////////// By Using Stack we can do in optimized way TC:- O(n) and SC:- O(1)
/*

    vector<int> finalPrices(vector<int>& prices) {
    int n = prices.size();
    stack<int> st; // Stack to store indices

    for (int i = 0; i < n; i++) {
        // While stack is not empty and current price <= price at the top of the stack
        while (!st.empty() && prices[i] <= prices[st.top()]) {
            prices[st.top()] -= prices[i]; // Apply the discount
            st.pop(); // Remove the index since it’s processed
        }
        st.push(i); // Push the current index onto the stack
    }

    // Return the modified prices array
    return prices;
}


*/