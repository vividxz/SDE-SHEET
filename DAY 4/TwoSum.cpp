class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>numsCopy = nums;
        vector<int> ans;
        int first = 0, second = 0,i=0, j=nums.size()-1;
        sort(numsCopy.begin(), numsCopy.end());
        while(i<j){
            if((numsCopy[i]+numsCopy[j]) > target)
                j--;
            else if((numsCopy[i]+numsCopy[j]) < target)
                i++;
            else{
                first = numsCopy[i];
                second = numsCopy[j];
                break;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == first){
                ans.push_back(i);
                break;
            }
                
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == second && i != ans[0]){
                ans.push_back(i);
                break;
            }
                
        }
        return ans;
    }
};