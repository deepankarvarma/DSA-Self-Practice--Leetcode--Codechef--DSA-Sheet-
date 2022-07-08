#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int A[t];
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
   
    for(int i=t-1;i>0;i--){
        if((A[i]>A[i-1]) && i==t-1){
            swap(A[i-1],A[i]);
            break;
        }
        else if((A[i]>A[i-1]) && i==t-2){ 
            swap(A[i-1],A[i]);
            swap(A[i+1],A[i]);
            break;
        }
        else if((i-1)==0){
            sort(A,A+t);
        }
    }
    for(int i=0;i<t;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}