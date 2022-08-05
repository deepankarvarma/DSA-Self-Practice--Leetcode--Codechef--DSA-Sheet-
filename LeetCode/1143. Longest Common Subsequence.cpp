class Solution {
public:
    int t[1001][1001];
    string s1,s2;
    int longestCommonSubsequence(string x, string y) {
        s1=x;
        s2=y;
        memset(t,-1,sizeof(t));
        return LCS(s1,s2,s1.length()-1,s2.length()-1);
    }
    int LCS(string &x,string &y, int n,int m){
    // Base condition check
    if(n<0 || m<0)
    return 0;
    if(t[n][m]!=-1)
        return t[n][m];
    if(x[n]==y[m]){
        return t[n][m]=1+LCS(x,y,n-1,m-1);
        // is the string is chosen then return with size reduced
    }
    else{
        return t[n][m]=max(LCS(x,y,n-1,m),LCS(x,y,n,m-1));
    }
        
}
};