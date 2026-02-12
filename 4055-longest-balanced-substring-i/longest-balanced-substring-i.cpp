class Solution {
public:
    int longestBalanced(string s) {
        int n=s.length();
        int ans=0;
        
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);

            int dist=0;
            int maxFreq=0;
            for(int j=i;j<n;j++){
                int idx=s[j]-'a';
                freq[idx]++;

                if(freq[idx]==1){
                    dist++;
                }
                maxFreq=max(maxFreq,freq[idx]);
                int len=j-i+1;
                if(maxFreq*dist==len){
                    ans=max(ans,len);
                }

            }
        }
        return ans;
    }
};