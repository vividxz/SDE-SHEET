class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>uset;
        for(int num : nums)
            uset.insert(num);
        int count=1, longest = 0;
        for(auto it: uset){
            int n = it;
            if(!((uset.find(n-1)) != uset.end())){
                count = 1;
                while(uset.find(n+1) != uset.end()){
                    n++;
                    count ++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};