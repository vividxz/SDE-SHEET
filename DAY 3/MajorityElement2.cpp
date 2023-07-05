class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0, count2=0, result1, result2;
        vector<int>ans;
        for(int num : nums){
            if(num == result1)
                count1 ++;
            else if(num == result2)
                count2 ++;
            else if(count1 == 0){
                result1 = num;
                count1 = 1;
            }
            else if(count2 == 0){
                result2 = num;
                count2 = 1;
            }
            else{
                count1 --;
                count2 --;
            }
        }
        cout << result1 << result2 <<endl;
        count1=0, count2=0;
        for(int num : nums){
            if(num == result1)
                count1++;
            else if(num == result2)
                count2++;
        }
        cout << count1 << count2;
        if(count1 > nums.size()/3)
            ans.push_back(result1);
        if(count2 > nums.size()/3)
            ans.push_back(result2);
        return ans;
    }
};