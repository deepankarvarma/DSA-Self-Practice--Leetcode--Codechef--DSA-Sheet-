// Approach : find the index of first and last occurence and add 1 to their difference
// Last index-first index+1

#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[],int n,int val){
    int start=0;
    int end=n-1;
    int first=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==val){
            // if the mid is equal to val then we will traverse the left array to find first occurence
            first=mid;
            end=mid-1;
        }
        else if(val<arr[mid])
        end=mid-1;
        else
        start=mid+1;
    }
    return first;
}
int lastoccurence(int arr[],int n,int val){
     int start=0;
    int end=n-1;
    int last=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==val){
            // if the mid is equal to val then we will traverse the right array to find first occurence
            last=mid;
            start=mid+1;
        }
        else if(val<arr[mid])
        end=mid-1;
        else
        start=mid+1;
    }
    return last;
}
int main(){
    int arr[]={2,8,12,0,14,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=10;
    
    cout<<lastoccurence(arr,n,val)-firstoccurence(arr,n,val)+1;
    return 0;
}