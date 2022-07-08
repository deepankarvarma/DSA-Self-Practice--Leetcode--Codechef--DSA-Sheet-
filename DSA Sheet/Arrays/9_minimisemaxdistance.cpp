    #include<bits/stdc++.h>
using namespace std;
int findmin( int A[],int n){
    int t=A[0];
    for(int i=1;i<n;i++){
        if(A[i]<t)
        t=A[i];
    }
    return t;
}
int main(){
    int n,k;
    cin>>k>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    for(int i=0;i<n;i++){
        if((A[i]-k)<=0 || A[i]==findmin(A,n)){
            A[i]+=k;    
        }
        else
        A[i]-=k;
    }
    sort(A,A+n);
    cout<<A[n-1]-A[0];
    return 0;
}