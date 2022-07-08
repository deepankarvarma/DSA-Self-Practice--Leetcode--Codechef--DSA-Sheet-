#include<iostream>
using namespace std;
void findmax(int *A,int n){
    int temp=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>temp)
        temp=A[i];
        
    }
    cout<<temp<<endl;
}
void findmin(int *A,int n){
    int temp=A[0];
    for(int i=1;i<n;i++){
        if(temp>A[i])
        temp=A[i];
    }
    cout<<temp<<endl;
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    findmax(A,n);
    findmin(A,n);
}