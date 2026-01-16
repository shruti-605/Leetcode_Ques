class Solution {
public:
    int splitNum(int num) {
        //convert number to string
        string s=to_string(num);
        //sort
        sort(s.begin(),s.end());//2345

        string n1="" , n2="";
        for(int i=0;i<s.length();i++){
            if(i%2==0){//
                n1+=s[i];//24
            }else{
                n2+=s[i];//35

            }
                
        }
        return stoi(n1)+stoi(n2);

    }
};