// We are given a increasing array , we have to return the index of the given number.
// Brute force approach is that to compare each element of array this is linear search.
// Approach:- We use 3 variable start end and mid .And compare the value of middle element
// with the value we have..
// Time complexity- logbase2(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int value=5;
    int start=0;
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
        else if(value>arr[mid])
        start=mid+1;
        
    }
    cout<<"Absent";
    return 0;
}
