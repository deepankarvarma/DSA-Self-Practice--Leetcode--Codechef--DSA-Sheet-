#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1];
    int B[n2];
    int C[n3];
    for(int i=0;i<n1;i++){
        cin>>A[i];
    }
    for(int i=0;i<n2;i++){
        cin>>B[i];
    }
    for(int i=0;i<n3;i++){
        cin>>C[i];
    }
     int i = 0, j = 0, k = 0;
     while (i < n1 && j < n2 && k < n3)
    {
         if (A[i] == B[j] && B[j] == C[k])
         {   cout << A[i] << " ";   i++; j++; k++; }

         else if (A[i] < B[j])
             i++;
 
         else if (B[j] < C[k])
             j++;
 
         else
             k++;
    }
    return 0;
}