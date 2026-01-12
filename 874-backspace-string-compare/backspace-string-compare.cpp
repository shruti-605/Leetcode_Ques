class Solution {
public:
    string  buildString(string s){
    stack<char>st;
        for(char c:s){
            if(c=='#'){
                if(!st.empty())
                    st.pop();
                }else{
                    st.push(c);
                }
            }
            string res="";
            while(!st.empty()){
                res+=st.top();
                st.pop();
            }
            reverse(res.begin(),res.end());
            return res;
        }
    
    bool backspaceCompare(string s, string t) {
        return buildString(s)==buildString(t);
    }
};