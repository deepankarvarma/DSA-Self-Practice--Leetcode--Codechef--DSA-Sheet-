// We are given a string .We will make a string which is its reverse.Then we will find LCS 
// between two and use formula a.length-lcs.length()
// We firstly find the LCS of both strings and then we find the deletions and insertions required`
#include <bits/stdc++.h>
using namespace std;
int t[101][101];
void lcsprint(string x,string y,int m,int n){
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0||j==0)
                t[i][j]=0;
        }
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(x[i-1]==y[j-1])
                t[i][j]=1+t[i-1][j-1];
            else    
                t[i][j]=max(t[i-1][j],t[i][j-1]);
        }
    }
    string s;
    int i=m;
    int j=n;
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
    cout<<"Deletions required (String a - LCS)"<<x.length()-s.length()<<endl;
    

}
int main(){
    string x="aebcbda";
    string y="";
    int m=x.length();
    for(int i=m-1;i>=0;i--){
        y+=x[i];
    }
    int n=y.length();
    
    lcsprint(x,y,m,n);
    
}
