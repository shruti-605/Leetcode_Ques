class Solution {
public:
    int totalMoney(int n) {
        int res=0;
        int monday_money=1;//1
        while(n>0){
            int money=monday_money;
            for(int i=1;i<=min(n,7);i++){
                res+=money;
                money++;
            }
            n=n-7;
            monday_money++;

        }
        return res;
    }
};