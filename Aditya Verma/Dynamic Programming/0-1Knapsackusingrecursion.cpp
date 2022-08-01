// int val[] = { 60, 100, 120 };
// int wt[] = { 10, 20, 30 };
// int W = 50;
// Answer : 220
#include<bits/stdc++.h>
using namespace std;
int recurknapsack(int val[],int wt[],int W,int n){
    if(W==0 || n==0){
        return 0;
    }
    if(wt[n-1]<=W){
        return max(val[n-1]+recurknapsack(val,wt,W-wt[n-1],n-1),recurknapsack(val,wt,W,n-1));
    }
    else if(wt[n-1]>W){
       return recurknapsack(val,wt,W,n-1);
    }
}
int main(){
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int W=50;
    int n=sizeof(val)/sizeof(val[0]);
    cout<<recurknapsack(val,wt,W,n);
    return 0;
}