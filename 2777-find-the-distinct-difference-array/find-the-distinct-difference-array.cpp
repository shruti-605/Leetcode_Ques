class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);

        for(int i=0;i<n;i++){
            unordered_set<int>left,right;

            for(int j=0;j<=i;j++){
                left.insert(nums[j]);
            }
            for(int j=i+1;j<n;j++){
                right.insert(nums[j]);
            }
            ans[i]=left.size()-right.size();
        }
        return ans;
    }
};