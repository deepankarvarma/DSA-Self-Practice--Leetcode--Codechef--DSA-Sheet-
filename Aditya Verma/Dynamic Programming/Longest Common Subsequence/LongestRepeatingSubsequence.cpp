// We have to find the longest subsequence in a string which gets repeated.
// For eg :- AABEBCDD , LRS will be ABD.
// O/P : 3 (length of longest repeating subsequence)
// It is same as LCS but with an exception that i!=j
#include<bits/stdc++.h>
using namespace std;
int main(){
    string x="pqrp";
    int n=x.length();
    int t[n+1][n+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==x[j-1] && i!=j)
            t[i][j]=1+t[i-1][j-1];
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    cout<<t[n][n];
    return 0;
}