class Solution {
public: 
    bool hasAlternatingBits(int n) {
        string binary="";
        while(n>0){
            binary=char(0+(n%2))+binary;
            n=n/2;
        }
        for(int i=1;i<binary.length();i++){
            if(binary[i]==binary[i-1])
                return false;
            
        }
        return true;
        
    }
};