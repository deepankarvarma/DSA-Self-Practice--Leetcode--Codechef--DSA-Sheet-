//Tabulation is a top down approach.In this only the matrix is used and there is no recursive call made.
//The base condition is used for initialization and the recursive calls are fetched from the matrix itself.
//in this the n and W are changed with i and j
#include<bits/stdc++.h>
using namespace std;
int main(){
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    int t[n+1][W+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            if(i==0 || j==0){
                t[i][j]=0;//basically fills the matrix with 0 if n==0 || W==0
            }
        }
    }
    //Without disturbing the initialized values we perform the operation
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
            }
            else if (wt[i-1]>j)
            t[i][j]=t[i-1][j];
        }
    }
    cout<<t[n][W];
    return 0;
}