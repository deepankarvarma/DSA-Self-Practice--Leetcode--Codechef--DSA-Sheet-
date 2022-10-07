// Main functionality of set is to find the unique elements stored 
// for eg if you have written 5 times 5, in the set it will be stored only once.
// implemented using bst.Only two operations are possible addition and deletion.
// Elements are returned in sorted order.
// Time complexity of insert operation is => Oh(logn)
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    for(int i:s)
    cout<<i<<endl;
    cout<<endl;
    // set<int>::iterator it=s.begin();
    // it++;
    // s.erase(it);
    // for(int i:s)
    // cout<<i<<endl;
    // // cout<<s.begin()<<endl; This does not works
    // cout<<endl;
    // cout<<s.count(5)<<endl;
    // cout<<s.count(3)<<endl;  //check whether 5 is present in the set or not
    return 0;
}