class Solution {
public:
    int maxPower(string s) {
        int n=s.size();
        int currCount=1;
        int maxCount=1;

        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                currCount++;
            }else{
                maxCount=max(maxCount,currCount);
                currCount=1;
            }

        }
        return max(maxCount,currCount);
    }
};