#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
int LCSMemoize(string x,string y ,int n,int m){
    if(n==0 || m==0)
    return 0;
    if(t[n][m]!=-1)
    return t[n][m];
    if(x[n-1]==y[m-1]){
     return t[n][m]=1+LCSMemoize(x,y,n-1,m-1);
    }
    else{
        return t[n][m]=max(LCSMemoize(x,y,n-1,m),LCSMemoize(x,y,n,m-1));
    }
}
int main(){
    memset(t,-1,sizeof(t));
    string x="ylqpejqbalahwr";
    string y="yrkzavgdmdgtqpg";
    cout<<LCSMemoize(x,y,x.length(),y.length());
    return 0;
}