class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int m=mat.size();
        int n=m;
        for(int i=0;i<m;i++){
            sum+=mat[i][i];
        }
        for(int i=0;i<m;i++){
            if(i!=n-i-1){
             sum+=mat[i][n-i-1];
        }
        }
        return sum;
    }
};