// Nearly sorted array is an array in which the element which must have been at ith position
// is currently at i-1 or i or i+1 th position
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10, 3, 40, 20, 50, 80, 70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int value=50;
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==value){
            cout<< mid;
            return 0;
        }
        else if(mid-1>=start && arr[mid-1]==value)
        {
            cout<< mid-1;
            return 0;
        } 
        else if(mid+1<=end && arr[mid+1]==value){
            cout<< mid+1;
            return 0;
        } 
        if(value<arr[mid]){
            end=mid-2;
        }      
        else{
            start=mid+2;
        }
    }
    cout<<"Absent";
    return 0;
}