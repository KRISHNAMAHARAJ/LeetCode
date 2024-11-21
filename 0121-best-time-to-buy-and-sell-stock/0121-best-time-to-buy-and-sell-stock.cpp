class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int buy=arr[0];
        int maxprofit=0;
        int profitcal=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]<buy){
                buy=arr[i];  //1
            }
            else{
                profitcal=arr[i]-buy;   //8 1 10 0 8 1
            }
            maxprofit=max(maxprofit, profitcal);
        }
        return maxprofit;
    }
};