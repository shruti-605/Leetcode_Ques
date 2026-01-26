class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3)return false;

        bool hasVowel=false;
        bool hasConsonant=false;

        for(char c:word){
            if(!isalnum(c))return false;

            char ch=tolower(c);
            if(isalpha(ch)){
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                    hasVowel=true;
                }else{
                    hasConsonant=true;
                }
            }
        }
        return hasVowel && hasConsonant;
    }
};