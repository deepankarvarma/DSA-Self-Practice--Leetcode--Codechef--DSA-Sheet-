//Memoization is a top down approach.
//Memoization is a part of DP and a extension of recusion just by including storage 
//and 2 lines of code. It basically makes a recursive call iff the value is -1, in
//the matrix. Disadvantage -> It can congest the stack due to multiple function calls 
//To make the matrix we consider those variable in which a change is there 
//In knapsack the weight is reduced if the item is selected and the numebr of items 
//is also reduced. So the matrix size will be dependent on these.
#include<bits/stdc++.h>
using namespace std;
int recurknapsack(int val[],int wt[],int W,int n){
    int t[n+1][W+1]; //made a matrix to store the values so as to avoid recursive calls
    memset(t,-1,sizeof(t));//initialize the matrix by -1.
    if(W ==0 || n==0)
    return 0;
    if(t[n][W]!=-1) //means already it has a value and no need to make a recursive call again
    return t[n][W];
    if(wt[n-1]<=W){
        return t[n][W]=max(val[n-1]+recurknapsack(val,wt,W-wt[n-1],n-1),recurknapsack(val,wt,W,n-1));
        //we are also storing the returned value so as to avoid the recursive calls for the index n,W
    }
    else if (wt[n-1]>W){
        return t[n][W]=recurknapsack(val,wt,W,n-1);
    }
}
int main(){
     int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << recurknapsack(val, wt, W, n);
}