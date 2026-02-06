class Solution {
public:
    bool checkString(string s) {
        bool seenB=false;//flag abhii tkk b ni mila

        for(char c:s){
            if(c=='b'){
                seenB=true;
            }else{
                if(seenB)return false;
            }
        }
        return true;
    }
};