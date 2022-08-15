// The approach is same as that of floor of an element, only difference is that if the arr[mid]>val , we will store it in the res;
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,6,7,9};
    int value=5;
    int start=0;
    int res=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    while(start<=end){
        // int mid=(start+end)/2 This technique may cause integer overflow in some cases
        int mid=start+(end-start)/2;
        if(value==arr[mid]){
        cout<< arr[mid];
        return 0;
        }
        else if(value<arr[mid]){
        res=arr[mid];
        end=mid-1;
        }
        else if(value>arr[mid]){
        start=mid+1;
        }
    }
    cout<<res;
    return 0;
}