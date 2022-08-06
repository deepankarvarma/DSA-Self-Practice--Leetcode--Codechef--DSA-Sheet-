class Solution {
public:
    int longestPalindromeSubseq(string a) {
        string b="";
    for(int i=a.length()-1;i>=0;i--){
        b+=a[i];
    }
    int n=a.length();
    int t[n+1][n+1];//both string have same length hence we have used 1 variable only
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(a[i-1]==b[j-1])
            t[i][j]=1+t[i-1][j-1];
            else
            t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    return t[n][n];
    }
};