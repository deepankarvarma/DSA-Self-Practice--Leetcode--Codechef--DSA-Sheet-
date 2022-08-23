class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length()/2;
        int m=s.length()/2;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c1++;
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                c1++;
        }
        for(int i=m;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                c2++;
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                c2++;
        }
        if(c1==c2)
            return true;
        return false;
    }
};