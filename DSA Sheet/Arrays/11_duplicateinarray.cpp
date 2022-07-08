#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(A[i]==A[j] && i<j){
            cout<<A[i]<<endl;
            break;
            }
        }
    }
    return 0;
}