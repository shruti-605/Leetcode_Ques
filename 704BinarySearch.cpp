class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n=nums.size();
       int lo=0,ti=n-1;
       while((ti-lo)>1){
        int mid=lo+(ti-lo)/2;
        if(nums[mid]<target) lo=mid+1;
        else ti=mid;
       }
       if(nums[lo]==target) return lo;
       else if(nums[ti]==target) return ti;
       else return -1;
    }
};
