class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int result=0;
        int currSum=0;
        mp[0]=1;

        for(int &num:nums){
            currSum+=num;
        int rem=currSum-goal;
        if(mp.find(rem)!=mp.end()){
            result+=mp[rem];
        }
        mp[currSum]++;
        }
        return result;
        // int count=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==goal){
        //             count++;
        //         }
        //     }
        // }
        // return count;
    }
};