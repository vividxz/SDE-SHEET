class Solution {
public:
void transpose(vector<vector<int>>& m){
    for(int i=0; i<m.size(); i++){
        for(int j=i; j<m.size(); j++){
            swap(m[i][j], m[j][i]);
        }
    }
}
void swapCol(vector<vector<int>>& m){
    int n=m.size();
    for(int i=0; i<m.size(); i++){
        for(int j=0; j<m.size()/2; j++){
            swap(m[i][j], m[i][n-j-1]);
        }
    }
}
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        swapCol(matrix);
    }
};