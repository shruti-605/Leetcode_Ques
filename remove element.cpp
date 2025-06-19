class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){//3!=3,k=0,3!=2,k=1,
                nums[k]=nums[i];//nums[k]=nums[0]=2,2,2,3
                k++;
            }
        }
        return k;
    }
};
