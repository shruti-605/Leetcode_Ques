class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();

        int r=0, c=col - 1;
        int cnt=0;
        while(r<row && c>=0){
            if(grid[r][c]<0){
                cnt+=(row-r);
                c--;
            }else{
                r++;
            }
        }
        return cnt;
    }
};