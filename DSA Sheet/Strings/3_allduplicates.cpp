#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;i<str.size();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>1){
            cout<<char('a'+i)<<", "<<count[i]<<endl;
        }
    }
    return 0;
}