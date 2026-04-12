class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>>maxHeap;
        for(auto x:freq){
            maxHeap.push({x.second,x.first});//Max heap automatically keeps largest frequency at top
        }
        vector<int> result;
        for(int i=0;i<k;i++){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;

    }
};