//We are given an array and a number, we have to return the numebr of subsets whose sum 
// is equal to n.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,0,0,3};
    int X=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int subset[n+1][X+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<X+1;j++){
            if(i==0)
            subset[i][j]=0;//same as subset sum except false is exchanged with 0
            if(j==0)
            subset[i][j]=1;
        }
    }

    for(int i=1;i<n+1;i++){
        for(int j=0;j<X+1;j++){
            if(arr[i-1]<=j){
                subset[i][j]=subset[i-1][j]+subset[i-1][j-arr[i-1]];
            }
            else if (arr[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    cout<<subset[n][X];
    return 0;
}