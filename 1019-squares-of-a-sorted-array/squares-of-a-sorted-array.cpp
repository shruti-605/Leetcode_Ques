class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);

        int l=0,r=n-1;
        int index=n-1;
        while(l<=r){
            if(abs(nums[l])>abs(nums[r])){
                result[index]=nums[l]*nums[l];
                l++;
            }else{
                result[index]=nums[r]*nums[r];
                r--;
            }
            index--;
        }
        return result;

    }
};