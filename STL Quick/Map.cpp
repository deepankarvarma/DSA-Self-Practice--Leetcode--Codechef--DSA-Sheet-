// A-> B and A -> C is not possible, but A-> B and C-> B is possible.
#include<bits/stdc++.h>
using namespace std;
int main(){
    // unordered_map<int,string> m;
    map<int,string> m;
    m[1]="love";
    m[13]="deeps";
    m[2]="babbar";
    // m.insert({5,"bheem"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    cout<<m.count(13)<<endl;
    m.erase(13);
     auto it=m.find(2);//just returns the iterator
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}