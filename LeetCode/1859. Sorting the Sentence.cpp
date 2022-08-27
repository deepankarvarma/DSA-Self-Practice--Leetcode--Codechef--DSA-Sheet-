class Solution {
public:
    string sortSentence(string s) {
    vector<string >vec(9);
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        string str;
        while(!isdigit(s[i])){
            str+=s[i++];
        }
        vec[(s[i] - '0')-1] =str;
        cnt++;
        i++;
    }
    string ans;
    for(int i=0; i<cnt; i++){
        ans+=vec[i];
        ans+=" ";
    }
    return ans.substr(0,ans.length()-1);
}
};