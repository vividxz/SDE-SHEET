class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row;
        vector<int>col;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(auto& row_it:row){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[row_it][j] = 0;
            }
        }
        for(auto& col_it:col){
            for(int i=0; i<matrix.size(); i++){
                matrix[i][col_it] = 0;
            }
        }
        
    }
};