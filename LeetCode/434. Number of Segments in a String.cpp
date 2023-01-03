class Solution {
public:
    int countSegments(string s) {
        int n=0;
        s.push_back(' ');
        for(int i=1;i<s.length();i++){
            if(s[i]==' ' && s[i-1]!=' ')
                n++;
        }
    
    return n;
    }
};