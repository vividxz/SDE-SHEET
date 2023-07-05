class Solution {
public:
    int ncr(int n, int r){
        double ans = 1;
        for(int i=1; i<=r; i++){
            ans = ans*(n-r+i)/i;
        }
        return int(ans);
    }
    int uniquePaths(int m, int n) {
        return ncr(m+n-2, m-1); 
    }
};