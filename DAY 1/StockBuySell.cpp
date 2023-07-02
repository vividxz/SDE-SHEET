class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX, diff=0, profit=0;
        for(int i=0; i<prices.size(); i++){
            mn = min(mn, prices[i]);
            diff = prices[i] - mn;
            profit = max(diff, profit);
        }
        return profit;
    }
};