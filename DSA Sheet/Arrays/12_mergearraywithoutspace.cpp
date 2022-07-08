#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int A[n],B[m];
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<m;i++){
        cin>>B[i];
    }
    
    if(m>n){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(A[i]>B[j]){
                        swap(A[i],B[j]);
                        sort(A,A+n);
                        sort(B,B+m);
                        break;
                    }
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<B[i]<<" ";
    }
    return 0;
}