// We are given an integer and an array we have to return the number if it is present else return the floor of that element in array
// Approach:- Basically if the value of ar[mid]<value then it is a possible candidate for the floor, and hence we store that in res.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,9};
    int value=8;
    int start=0;
    int res=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<=end){
        // int mid=(start+end)/2 This technique may cause integer overflow in some cases
        int mid=start+(end-start)/2;
        if(value==arr[mid]){
        cout<< mid;
        return 0;
        }
        else if(value<arr[mid])
        end=mid-1;
        else if(value>arr[mid]){
        res=arr[mid];
        start=mid+1;
        }
    }
    cout<<res;
    return 0;
}