class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = 1, minP = 1, res = INT_MIN;
        for(int i: nums){
            if(i<0)
               swap(maxP, minP);
            maxP = max(maxP*i, i);
            minP = min(minP*i, i);
            res = max(maxP, res);
        }
        return res;
    }
};