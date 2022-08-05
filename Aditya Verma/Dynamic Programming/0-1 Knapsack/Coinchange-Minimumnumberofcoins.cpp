// Very important question refer to video for explanation
// INT_MAX-1 is used because when we will add 1 to that in line 26 it will become INT_MAX
// but if we would have taken INT_MAX , INT_MAX+1 will turn out to be a negative question
#include <bits/stdc++.h>
using namespace std;

int mincoins(vector <int> &coins,int sum){
    int n=coins.size();
    int t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(j==0)
                t[i][j]=0;
            if(i==0)
                t[i][j]=INT_MAX-1;
        }
    }
    for(int j=1;j<sum+1;j++)
        if(j%coins[0]==0)
            t[1][j]=j/coins[0];
        else    
            t[1][j]=INT_MAX-1;

    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(coins[i-1]<=j)
                t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);
            else
                t[i][j]=t[i-1][j];
        }
    }
    return t[n][sum];
}
int main(){
    vector <int> coins{25,10,5};
    int sum=30;
    cout<<mincoins(coins,sum)<<endl;
}