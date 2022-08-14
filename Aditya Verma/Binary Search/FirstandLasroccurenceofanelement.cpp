// 2,8,10, 10, 10,12,14'Lets say we have to find first and last occurence of 10.
// Mid is 10 but for the first occurence we will traverse to the left of the mid
// And for the last occurence we will traverse to the right.
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
    int arr[]={1,100,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int val=100;
    cout<<"First occurence "<<firstoccurence(arr,n,val)<<" "<<"Last occurence "<<lastoccurence(arr,n,val);
    return 0;
}