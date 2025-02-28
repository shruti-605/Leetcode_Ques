class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
       vector<int> ans;
       unordered_set<int> s;
       int n=grid.size();
       int a,b;
       int expSum=0,actualSum=0;//for finding misisng sum
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            actualSum +=grid[i][j]; //sum of actual sum
            if(s.find(grid[i][j])!=s.end()){//if current character already exsist in grid
                a=grid[i][j];//stores
                ans.push_back(a);//add the reapeated charcter to result
            }
            s.insert(grid[i][j]);//insert the current character

        }
       }
       //for finding missing values
       expSum=(n*n)*(n*n+1)/2;//formula for calculating
       b=expSum +a- actualSum;//for finding missing value
       ans.push_back(b);//(a,b)

       return ans;
    }
};
