class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        vector<int>v;
        for(auto it:freq){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end());
        int unique=freq.size();
        for(auto f:v){
            if(k>=f){
                k-=f;
                unique--;
            }else{
                break;
            }

        }
        return unique;
    }
};