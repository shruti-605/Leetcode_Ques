class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int x:nums){
         mp[x]++;
        
        if(mp[x]>n/2){
            return x;
        }
        }
        return -1;
        //boyer moore algo
        // int n=nums.size();
        // int freq=0,ans=0;
        // for(int i=0;i<n;i++){
        //     if(freq==0){//3==0,freq==1,freq==2
        //         ans=nums[i];//ans=nums[0]=3
        //     }
        //     if(ans==nums[i]){3==3,3==3,3==4
        //     //freq=1
        //         freq++;
        //     }else{
        //         freq--;//freq=1
        //     }
        // }
        // return ans;
    }
};