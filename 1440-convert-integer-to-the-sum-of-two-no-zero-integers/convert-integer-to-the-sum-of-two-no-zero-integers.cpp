class Solution {
public:
    bool noZero(int x){
        while(x>0){
            if(x%10==0)return false;
            x/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int>ans;
        for(int a=1;a<n;a++){
            int b=n-a;

            if(noZero(a)&& noZero(b)){
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};