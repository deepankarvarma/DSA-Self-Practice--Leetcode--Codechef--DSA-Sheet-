#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    int j=0;
 
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            if (i != j)
                swap(A[i], A[j]);
            j++;
        }
    }
    
     for(int i=0;i<n;i++){
        cout<<A[i];
    }
}