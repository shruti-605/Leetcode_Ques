class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        queue<int> Q;

        for(int i=0;i<s.size();i++){
            //check character is unique then queue me push kregaii queue me
            if(m.find(s[i])==m.end()){
                Q.push(i);//index ko push kregaii
            }
                m[s[i]]++;

                while(Q.size()>0 && m[s[Q.front()]]>1){
                    Q.pop();
                }
            }
            return Q.empty() ? -1 : Q.front();
        }
}
