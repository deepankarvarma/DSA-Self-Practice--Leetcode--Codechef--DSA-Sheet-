// we are given an Say containing the denotions we have .We have to find the number of 
// ways we can obtain sum by using these coins.
// Same as count of subsets of a given sum eNcept subset[i][j-S[i-1]]
#include<bits/stdc++.h>
using namespace std;
int main(){
      int S[]={1,2,3};
    int N=4;
    int n=sizeof(S)/sizeof(S[0]);
    int subset[n+1][N+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<N+1;j++){
            if(i==0)
            subset[i][j]=0;//same as subset sum eNcept false is eNchanged with 0
            if(j==0)
            subset[i][j]=1;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=0;j<N+1;j++){
            if(S[i-1]<=j){
                subset[i][j]=subset[i-1][j]+subset[i][j-S[i-1]];
            }
            else if (S[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    cout<<subset[n][N];
    return 0;
}