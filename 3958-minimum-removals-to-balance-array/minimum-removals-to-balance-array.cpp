class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int i=0,maxlen=1;
        for(int j=0;j<n;j++){
            if((long long)nums[j]>(long long )k *nums[i]){
                i++;
            }
            maxlen=max(maxlen,j-i+1);
        }
        return nums.size()-maxlen;
    }
};