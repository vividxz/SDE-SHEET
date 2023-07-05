class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int result, count = 0;
        for(int num : nums){
            if(count == 0)
                result = num;
            if(num == result)
                count ++;
            else
                count --;
        }
        return result;
    }
};