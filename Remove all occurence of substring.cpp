class Solution {
public:
    string removeOccurrences(string s, string part) {
        while(s.length()>0 && s.find(part)<s.length()){
            s.erase(s.find(part),part.length());//(start,end)
            //s.find(part) first position and part =abc which have to remove
        }
        return s;
    }
};
