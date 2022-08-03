//In this question we are given an array , we have to add a sign (+ or -)before each 
// element of array so that the result of the operation will be equal to given sum.
// The output is the count of such combinations.
// For eg. arr={1,1,2,3}; ,sum=1;
// +1-1-2+3=1 => (1+3)-(1+2)
//Basically we have divided the array into two parts one with positive sign and with negative
// S1=1,3 , S2=1,2 ; Now we have to count the subsets with S1=S2=sum;
// This is reduced to count of subsets with given sum difference.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[]={1,1,1,1,1};
    int S=3;
    int n=sizeof(nums)/sizeof(nums[0]);
    int sarray=0;
    for(int i=0;i<n;i++){
        sarray+=nums[i];
    }
    int sum=(S+sarray)/2;
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
            if(nums[i-1]<=j)
            subset[i][j]=subset[i-1][j]+subset[i-1][j-nums[i-1]];
            else if (nums[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    cout<<subset[n][sum];
    return 0;
}