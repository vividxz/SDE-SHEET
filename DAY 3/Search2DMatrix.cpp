class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size()-1;
        while(start<end){
            int mid = (start+end)/2;
            if(target<matrix[mid][0])
                end = mid-1;
            else if(target>matrix[mid][0]){
                if(target<matrix[mid+1][0]){
                    start = mid;
                    break;
                }
                else
                    start = mid+1;
            }
            else
                return true;
        }
        int row = start;
        start = 0;
        end = matrix[0].size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(target<matrix[row][mid])
                end = mid-1;
            else if(target>matrix[row][mid])
                start = mid+1;
            else
                return true;
        }
        return false;
    }
};