#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    sort(A,A+n);
    
    cout<<"Smallest"<<A[k-1]<<"\t"<<"Largest"<<A[n-k];
}