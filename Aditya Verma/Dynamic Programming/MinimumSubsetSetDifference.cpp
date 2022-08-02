// We are given a array.We have to divide the array into two parts so that the difference
//of the sum of these two subarrays is minimum.
// In equal sum partition the difference was zero and in this the differnece is min. 
// the difference will always like between 0 and range where range is the sum of all the elements
//S2-S1=Range-S1-S1=>Range -2S1
// Basically we have to find the true in last row of the matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 3, 9,7,3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    bool subset[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
            subset[i][j]=false;
            if(j==0)
            subset[i][j]=true;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                subset[i][j]=subset[i-1][j] || subset[i-1][j-arr[i-1]];
            }
            else if(arr[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    int diff=INT_MAX;
    for(int i=sum/2;i>=0;i--){
        if(subset[n][i]==true){
            diff=sum-2*i;
            break;
        }
    }
    cout<<diff;
    return 0;
}
