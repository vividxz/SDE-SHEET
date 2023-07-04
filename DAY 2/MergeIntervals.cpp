class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>>ans;
        for(int i=1; i<n; i++){
            if(end >= intervals[i][0]){
                if(intervals[i][1] >= end)
                    end = intervals[i][1];
                
            }else{
                
                vector<int>temp;
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        vector<int>temp;
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
        return ans;
    }
};