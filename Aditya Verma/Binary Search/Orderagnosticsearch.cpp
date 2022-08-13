// We are given an array which is sorted , but the order in which it is sorted is not known
// Approach : we will compare any two indicies of the array and then apply it accordingly
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0])-1;
    int val=9;
    if(n==1){
        if(arr[0]==val){
            cout<<0;
            return 0;
        }
    }
    else{
        if(arr[0]>arr[1]){
            // means descending
            while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==val){
                cout<<mid;
                return 0;
            }
            else if(val<arr[mid])
            start=mid+1;
            else
            end=mid-1;
            }
        }
        else{
            // means ascending
            while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==val){
                cout<<mid;
                return 0;
            }
            else if(val>arr[mid])
            start=mid+1;
            else
            end=mid-1;
            }
        }
    }
    cout<<"Absent";
    return 0;
}