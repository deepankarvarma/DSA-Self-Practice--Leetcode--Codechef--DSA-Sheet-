#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int A[t];
    for(int i=0;i<t;i++){
        cin>>A[i];
    }
    int point=0,c;
    point=A[0];
    for(int i=0;point<A[t-1];i++){
    if(point!=A[t-1] && point!=A[0]){
        point=A[i];
        c=A[point];
    }
    else{
        point=A[i];
        c=A[point];
    }
    }
    return 0;
}