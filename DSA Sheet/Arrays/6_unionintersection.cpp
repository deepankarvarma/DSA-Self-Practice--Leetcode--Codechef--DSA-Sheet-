#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,ut,t=0;
    cin>>a>>b;
    int A[a],B[b];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    for(int i=0;i<b;i++){
        cin>>B[i];
    }
    
    ut=a+b;
    if(a<b){
        for(int j=0;j<a;j++){
        for(int i=0;i<b;i++){
            if(A[j]==B[i]){
            t++;
           
           }

        }  
    }
    }
    else {
        for(int j=0;j<b;j++){
        for(int i=0;i<a;i++){
            if(A[i]==B[j]){
            t++;
            
           }

        }
        }  
    }
    cout<<t<<"\t"<<ut-t;
    return 0;
}