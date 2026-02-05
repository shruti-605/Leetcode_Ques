// class solution{
// public:
//     vector<int> constructTransformedArray(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>result(n);
//         for(int i=0;i<n;i++){
//             if(nums[i]==0){
//                 result[i]=0;
//             }else{
//                 int target=(i+nums[i]+0)%n;
//             result[i]=nums[target];
//             }
//         }
//         return result;
//     }
// };
class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                result[i] = 0;
            } else {
                 long long shift = nums[i];
                long long target = ( (i + shift) % n + n ) % n;
                result[i] = nums[target];
            }
        }
        return result;
    }
};

