// Same question as normal bianry search but it is sorted in descending order.
// Only change is in the logic that if the value<arr[mid], the we traverse the right array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={29,28,27,26,23,20,10};
    int end=sizeof(arr)/sizeof(arr[0])-1;
    int start=0;
    int value=20;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==value){
            cout<<mid;
            return 0;
        }
        else if(value<arr[mid])
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<"Absent";
    return 0;
}