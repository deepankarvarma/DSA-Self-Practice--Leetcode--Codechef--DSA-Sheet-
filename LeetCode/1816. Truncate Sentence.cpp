class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                k--;
                cout<<k;
            }
            if(k>0){
               ans+=s[i];
            }
        }
        return ans;
    }
};