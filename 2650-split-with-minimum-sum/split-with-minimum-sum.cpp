class Solution {
public:
    int splitNum(int num) {
        //convert number to string
        string s=to_string(num);
        //sort
        sort(s.begin(),s.end());

        string n1="" , n2="";
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                n1+=s[i];
            }else{
                n2+=s[i];

            }
                
        }
        return stoi(n1)+stoi(n2);

    }
};