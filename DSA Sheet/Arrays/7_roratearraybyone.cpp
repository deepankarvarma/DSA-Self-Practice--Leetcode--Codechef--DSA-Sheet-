#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
    cin>>t;
    int A[t];
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    int ta=A[t-1];
    for(int i=t-1;i>0;i-- ){
        A[i]=A[i-1];
    }
    A[0]=ta;
    for(int i=0;i<t;i++){
        cout<<A[i];
    }
    return 0;
}