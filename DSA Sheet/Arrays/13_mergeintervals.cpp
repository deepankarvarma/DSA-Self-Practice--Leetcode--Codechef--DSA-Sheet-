#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[2*n];
    for(int i=0;i<2*n;i++){
        cin>>A[i];
    }
    for(int i=2;i<2*n-1;i=i+2){
        for(int j=1;j<2*n-1;j=j+2){
        if(A[j]>=A[i] ){
            cout<<A[i-2]<<" "<<A[j+2]<<endl;
            return 0;
            
        }
    }
    }
   
}