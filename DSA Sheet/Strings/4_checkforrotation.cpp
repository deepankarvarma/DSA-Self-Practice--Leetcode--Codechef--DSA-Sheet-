#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    string s2;
    cin>>s1>>s2;
    string s3=s1+s1;
    
    if(s3.find(s2)<s2.size()){
       cout<<"Yes";
    }
    else 
    cout<<"No";
    return 0;
}