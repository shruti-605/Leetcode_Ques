class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;

        //i=0,1,2
        for(int i=1;i<n;i++){
             if(nums[i]<nums[i-1]){
            cnt++;
        
        if(cnt>1) return false;

        if(i-2<0 || nums[i]>=nums[i-2]){
            nums[i-1]=nums[0];
        }else{
            nums[i]=nums[i-1];
        }

        }
        }
        return true;

    }
};