// We have to print the length of the longest common substring as the output
// I/P :- s1="abcde", s2="abfde" ; O/P=2(ab)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string x="eabcb";
    string y="bcbae";
    int maxlength=0;
    int n=x.length();
    int m=y.length();
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(x[i-1]==y[j-1]){
            t[i][j]=1+t[i-1][j-1];
            maxlength=max(maxlength,t[i][j]);
            }
            else 
            t[i][j]=0; // we have set the length 0 is the characters are not same i.e. discontinuity is there
        }
    }
    string s;
    int i=n;
    int j=m;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            s+=(x[i-1]);
            i--;
            j--;
        }
        else{
            if(t[i][j-1]>t[i-1][j])
                j--;
            else
                i--;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}
