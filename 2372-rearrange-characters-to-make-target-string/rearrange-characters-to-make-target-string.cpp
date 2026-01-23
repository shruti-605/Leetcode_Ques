class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int> freqS(26, 0);
        vector<int> freqT(26, 0);

        for(char c : s)
            freqS[c - 'a']++;

        for(char c : target)
            freqT[c - 'a']++;

        int res = INT_MAX;

        for(int i = 0; i < 26; i++){
            if(freqT[i] > 0){
                res = min(res, freqS[i] / freqT[i]);
            }
        }

        return res;
    }
};
