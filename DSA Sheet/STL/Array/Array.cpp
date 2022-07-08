/**************ARRAY USING NORMAL METHOD **************/
// #include<iostream>
// using namespace std;
// int main(){
//     int basic[3]={1,2,3};
//     cout<<basic[2];
//     return 0;
// }

/**************ARRAY USING VECTOR METHOD **************/
//BOTH OF THESE METHODS FORM STATIC ARRAY THAT IS SIZE IS FIXED AND COTIGUOS MEMORY ALLOCATION IS FOLLOWED
#include<iostream>
#include<array> // library for inbuilt array 
using namespace std;
int main(){
    array<int ,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index is "<<a.at(2)<<endl;
    cout<<"Empty of not (return 0/1) "<<a.empty()<<endl;
    cout<<"First element of array "<<a.front()<<endl;
    cout<<"Last element of array "<<a.back()<<endl;
    return 0;
}