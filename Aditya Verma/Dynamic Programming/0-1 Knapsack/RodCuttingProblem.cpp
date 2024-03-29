// Ne are given a rod of length N, Ne have to cut the rod so as to maximize the profit
// Exactly same as unbounded knapsack
#include<bits/stdc++.h>
using namespace std;
int main(){
    int price[]={ 1, 5, 8, 9, 10, 17, 17, 20 };
    int length[]={1,2,3,4,5,6,7,8};
    int N=8;
    int n=sizeof(length)/sizeof(length[0]);
    int t[n+1][N+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<N+1;j++){
            if(i==0 || j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<N+1;j++){
            if(length[i-1]<=j){
                t[i][j]=max(price[i-1]+t[i][j-length[i-1]],t[i-1][j]);
                //only difference in the code of bounded and unbounded knapsack is in 
                // above line, Nhen the item is chosen than it can be chosen again 
                // hence i-1 is replaced by i .
            }
            else if (length[i-1]>j)
            t[i][j]=t[i-1][j];
        }
    }
    cout<<t[n][N];
    return 0;
}