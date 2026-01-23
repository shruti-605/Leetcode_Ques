class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int>st;
        for(int x:nums){
            if(x>0){
                st.insert(x);
            }
        }
        int missing=1;
            while(st.count(missing)){
                missing++;
            }
        return missing;
    }
};