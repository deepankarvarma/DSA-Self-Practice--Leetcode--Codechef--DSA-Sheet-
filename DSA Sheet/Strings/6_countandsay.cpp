#include<bits/stdc++.h>
using namespace std;
string countAndSay(string n){
    if(n.size()<2){
        return n;
    }    
    else{
        string str;
        int c=0;
        if(n=="2"){
        for(int i=1;i<n.size();i++){
            c++;
        }
        return (to_string(c)+n.at(1));
        }    
    }    
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        countAndSay(to_string(n));
    }
    
    return 0;
}