class Solution {
public:
    bool contains(vector<vector<int>>& big, vector<int>& small){
        for(int i=0; i<big.size(); i++){
            if(big[i] == small)
                return true;
        }
        return false;
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                int s = nums[i] + nums[j];
                int start = j+1;
                int end = nums.size()-1;
                while(start<end){
                    long long check = (long long)(nums[start])+(long long)(nums[end])+(long long)(s);
                    if(check > target)
                        end--;
                    else if(check < target)
                        start++;
                    else{
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[start]);
                        temp.push_back(nums[end]);
                        if(!contains(ans, temp))
                            ans.push_back(temp);
                        start++;
                        end--;
                    }
                }
            }
        }
        return ans;
    }
};