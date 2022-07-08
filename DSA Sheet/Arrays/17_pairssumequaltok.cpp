#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if((A[i]+A[j])==k && j>i)
            count++;
        }
    }
    cout<<count;
    return 0;
}