class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        string ans="";

        reverse(s.begin(),s.end());
        //eulb si yks eht

        for(int i=0;i<n;i++){
            string word="";
            while(i<n && s[i]!=' '){
                word+=s[i];//eulb
                i++;
            }
            reverse(word.begin(),word.end());
            if(word.length()>0){
                ans+=' '+word;
            }
        }
        return ans.substr(1);//_pen_the
        //it will start from 1
    }
};