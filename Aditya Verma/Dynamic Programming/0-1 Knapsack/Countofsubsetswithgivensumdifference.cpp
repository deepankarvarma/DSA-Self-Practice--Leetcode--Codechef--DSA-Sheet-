// In this problem we have to give the count of different subsets whose differnce of the
// sum is equal to given number. S1-S2=difference
//S1-S2=difference
//S1+S2=Sum(Arr)
// Adding both equations
//2S1=difference+Sum(Arr)
// => S1= difference+Sum(Arr)/2
// now this problem is converted into count the numebr of subsets with given sum
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,3};
    int diff=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr+=arr[i];
    }
    // => S1= (difference+Sum(Arr))/2
    int sum= (diff+sumarr)/2;
    int subset[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
            subset[i][j]=0;
            if(j==0)
            subset[i][j]=1;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j)
            subset[i][j]=subset[i-1][j]+subset[i-1][j-arr[i-1]];
            else if (arr[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    cout<<subset[n][sum];
    return 0;
}