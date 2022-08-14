// This question is just an extension of number of times a sorted array is rotated.
// We apply binary search from 0 to idx of smallest element-1 and from idx to last index
// because the array before and after smallest element is sorted.
// If both return -1 then it means the array is not sorted
#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int start,int end,int target){
    int result=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            result=mid;
            break;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return result;
}
int countRotations(int arr[], int low, int high)
{
	if (high < low)
		return 0;
    if (high == low)
		return low;
    int mid = low + (high - low) / 2; /*(low + high)/2;*/
    if (mid < high && arr[mid + 1] < arr[mid])
		return (mid + 1);
    if (mid > low && arr[mid] < arr[mid - 1])
		return mid;
    if (arr[high] > arr[mid])
		return countRotations(arr, low, mid - 1);

	return countRotations(arr, mid + 1, high);
}

int main()
{
	int arr[] = { 15, 18, 2, 3, 6, 12 };
    int target=12;
	int N = sizeof(arr) / sizeof(arr[0]);
    int ls=binarysearch(arr,0,countRotations(arr, 0, N - 1)-1,target);
    int rs=binarysearch(arr,countRotations(arr, 0, N - 1),N-1,target);
    if(ls==-1 && rs==-1){
        cout<<"Absent";
    }
    else if(ls!=-1){
        cout<< ls;
    }
    else{
         cout<< rs;
    }
	
	return 0;
}
