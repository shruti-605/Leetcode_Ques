class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();

        if(nums.size()==0) return 0;

        int currlen=1; 
        int maxlen=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                currlen++;
            }else{
                currlen=1;
            }
            maxlen=max(maxlen,currlen);
        }
        return maxlen;
    }
};