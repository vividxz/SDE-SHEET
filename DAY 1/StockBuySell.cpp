class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX;
        int minPrice[prices.size()];
        for(int i=0; i<prices.size(); i++){
            mn = min(mn, prices[i]);
            minPrice[i] = mn;
        }
        int diff=0, profit = 0;
        for(int i=prices.size()-1; i>0; i--){
            diff = prices[i]-minPrice[i];
            profit = max(diff, profit);
        }
        return profit;
    }
};