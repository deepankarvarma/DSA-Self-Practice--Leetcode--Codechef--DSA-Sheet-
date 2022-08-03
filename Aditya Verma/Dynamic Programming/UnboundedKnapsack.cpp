// Main difference is that multiple occurences of same item is allowed that means
// we can choose a item any number of times.
// Related problems:-
// 1)Rod cutting
// 2)Coin change I (Maximum number of ways)
// 3)Coin change II (Minimum numebr of coins)
// 4)Maximum ribbon cut
// The main use of multiple occurences is that if a item is rejected then it will always be 
// rejected and this process is completed.But if a item is accepted now may be in future
// that may be selected again and hence the process is not complete in just 1 operation
#include<bits/stdc++.h>
using namespace std;
int main(){
    int val[]={1,30};
    int wt[]={1,50};
    int w=100;
    int n=sizeof(wt)/sizeof(wt[0]);
    int t[n+1][w+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<w+1;j++){
            if(i==0 || j==0)
            t[i][j]=0;
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
                //only difference in the code of bounded and unbounded knapsack is in 
                // above line, when the item is chosen than it can be chosen again 
                // hence i-1 is replaced by i .
            }
            else if (wt[i-1]>j)
            t[i][j]=t[i-1][j];
        }
    }
    cout<<t[n][w];
    return 0;
}