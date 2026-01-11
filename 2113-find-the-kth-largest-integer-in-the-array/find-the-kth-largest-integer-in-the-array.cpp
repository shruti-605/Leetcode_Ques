// class Solution {
// public:
//     struct cmp {
//     bool operator()(string &a, string &b) {
//         if (a.size() != b.size())
//             return a.size() > b.size();
//         return a > b;
//     }
// };
//     string kthLargestNumber(vector<string>& nums, int k) {
//         priority_queue<string,vector<string>,cmp>pq;
//         for(string num:nums ){
//             pq.push(num);

//             if(pq.size()>k){
//             pq.pop();
//         }
//         }
//         return pq.top();
//     }
// };
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](string &a, string &b) {
            if (a.size() != b.size())
                return a.size() > b.size();   // longer = larger
            return a > b;                     // lexicographical
        });

        return nums[k - 1];
    }
};
