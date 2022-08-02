//Equal sum partition means we have to divide the given array into two subarrays so that 
// the sum of both arrays is equal, the size of these two subarrays may be different
// if it is possible to do that return true else false
// For eg. arr={1,5,5,11}, it can be brokn into two parts {1,5,5} and {11} having equal sums
// only the array is given as an input and no capacity is given.

// very important observation is that an array can be divided into equal sum  iff
// the sum of all its terms is even i.e. 2*s.
// now we have to check if there is a subset whose sum is s, because the sum of rest
//subset will be 2*s-s=s
//this is now reduced to subset sum problem .
#include<bits/stdc++.h>
using namespace std;
int main(){
    int set[] = { 3, 34, 4, 12, 5, 2 };
    int sum = 0;
    int n = sizeof(set) / sizeof(set[0]);
    for(int i=0;i<n;i++){
        sum+=set[i];

    }
    if(sum%2!=0){
        cout<<"No";
        return 0;
    }
    else{
    bool subset[n + 1][sum/2 + 1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum/2+1;j++){
            if(i==0)
            subset[i][j]=false;
            if(j==0)
            subset[i][j]=true;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum/2+1;j++){
            if(set[i-1]<=j){
                subset[i][j]=subset[i-1][j-set[i-1]] || subset[i-1][j];
            }
            else if (set[i-1]>j)
            subset[i][j]=subset[i-1][j];
        }
    }
    cout<<subset[n][sum/2];
    }
    return 0;
}