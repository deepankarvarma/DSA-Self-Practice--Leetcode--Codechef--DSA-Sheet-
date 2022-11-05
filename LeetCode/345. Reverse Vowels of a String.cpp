class Solution {
public:
    string reverseVowels(string s) {
        vector<char> store;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                store.push_back(s[i]);
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                store.push_back(s[i]);
            }
        }
        int n=store.size()-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[i]=store[n--];
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               s[i]=store[n--];
            }
        }
        return s;
    }
};