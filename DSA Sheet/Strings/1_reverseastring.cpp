#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    for(int i=0;i<(str.length()/2);i++){
        swap(str.at(i),str.at(str.length()-1-i));
    }
    cout<<str;
    return 0;

}