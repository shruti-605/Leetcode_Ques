class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        freq[0]=1;

        int ans=0;
        int oddCount=0;

        for(int x:nums){
            if(x%2!=0)
                oddCount++;
            
            if(freq.count(oddCount-k)){
                ans+=freq[oddCount-k];
            }
            freq[oddCount]++;
        }
        return ans;

    }
};