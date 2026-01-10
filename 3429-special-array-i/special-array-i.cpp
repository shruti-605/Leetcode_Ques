class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]%2==nums[i-1]%2){
                return false;
            }
        }
        return true;
        // bool hasEven=false,hasOdd=false;

        // for(int i=0;i<n;i++){
        //     if(nums[i]%2==0)hasEven=true;
        //     else hasOdd=true;
        
        // //check consecutive even odd
        // if(i>0 && nums[i]%2==1 && nums[i-1]%2==1){
        //     return false;
        // }
        // }
        // return hasOdd && hasEven;
    }
};