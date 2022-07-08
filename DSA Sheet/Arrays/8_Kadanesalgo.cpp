#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int A[t];
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    int sum=A[0];
    for(int i=1;i<t;i++){
        if(A[i]>0){
            sum+=A[i];
            
        }
        else if((i<t-1 && A[i]<0) && (abs(A[i])<A[i+1] && A[i+1]>0)){
            sum+=A[i];
             
        }
        
    }
    cout<<sum;
    return 0;
}