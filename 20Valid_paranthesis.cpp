class Solution {
public:
    bool isValid(string expression) {
        stack<char> s;
        for(int i=0;i<expression.length();i++){
            char ch=expression[i];
            if(ch=='('|| ch=='[' || ch=='{'){
            s.push(ch);
        }else{
        
        //for closing bracket
        if(!s.empty()){
            char top=s.top();
            if((ch==')' && top=='(') || (ch==']' && top=='[') || (ch=='}' && top=='{')){
                s.pop();
            }else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    }
    return s.empty();
    }
};
