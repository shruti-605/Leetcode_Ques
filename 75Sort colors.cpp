class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int mid=0;
        int ti=n-1;
        while(mid<=ti){
            if(nums[mid]==0){
                swap(nums[lo],nums[mid]);
                lo++; mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[ti],nums[mid]);
                ti--;
            }
        }

    }
};
