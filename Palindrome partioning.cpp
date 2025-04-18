class Solution {
public:
    bool isPalin(string s){
        string s2=s;
        reverse(s2.begin(),s2.end());

        return s==s2;
    }
    void getAllParts(string s,vector<string>& partitions,vector<vector<string>> &ans){
        if(s.size()==0){
            ans.push_back(partitions);
            return;
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);//for partion each part
            //if ispalindrome
            if(isPalin(part)){
                partitions.push_back(part);//palindrome wale part ans me push back
                getAllParts(s.substr(i+1),partitions,ans);//bacha hua part after partition
                //backtrack waps aayega uska htaa degaii next kt lgane se phlee
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>partitions;

        getAllParts(s,partitions,ans);
        return ans;
        
    }
};
