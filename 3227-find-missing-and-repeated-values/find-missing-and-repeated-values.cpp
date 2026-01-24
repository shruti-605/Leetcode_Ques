class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
       vector<int>freq(n*n+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                freq[grid[i][j]]++;
            }
        }
        int missing =-1, repeated=-1;
        for(int num=1;num<=n*n;num++){
            if(freq[num]==2){
                repeated=num;
            }else if(freq[num]==0){
                missing= num;
            }
        }
        return {repeated,missing};


    }
};