class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo=0, mid=0, hi=nums.size()-1;
        while(mid<=hi){
            if(nums[mid] == 1)
                mid++;
            else if(nums[mid] == 0){
                swap(nums[lo], nums[mid]);
                mid++;
                lo++;
            }
            else{
                swap(nums[mid], nums[hi]);
                hi--;
            }
        }
    }
};