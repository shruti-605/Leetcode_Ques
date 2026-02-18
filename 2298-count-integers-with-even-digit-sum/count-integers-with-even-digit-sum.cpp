class Solution {
public:
    int countEven(int num) {
        if(num<2)return 0;
        int digitSum=0;
        int temp=num;

        while(temp>0){
            digitSum+=temp%10;
            temp/=10;
        }
         return (num - (digitSum % 2)) / 2;
    
        

        // int count=num/2;
        // if(digitSum%2==1){
        //     count--;
        // }
        // return count;
    }
};