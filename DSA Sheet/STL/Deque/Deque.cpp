//NOT CONTIGUOUS MEMORY ALLOCATION
//INSERTION AND DELETION CAN TAKE PLACE FROM BOTH ENDS
//DYNAMIC IN NATURE
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    //push front inserts the element in front i.e. before the previous element 
    //push back inserts the element at the back i.e. after the previous element
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<"Element at first index "<<d.at(1)<<endl;
    cout<<"Front element "<<d.front()<<endl;
    cout<<"Back element "<<d.back()<<endl;
    cout<<"Empty or not (return 0/1) "<<d.empty()<<endl;
    cout<<"Before erase size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1); //from where to erase ,till where to erase
    cout<<"After erase "<<d.size()<<endl;
    //size after erase is 0 but max size i.e. size allocated to deque is not 0 just like vector
    return 0;
}