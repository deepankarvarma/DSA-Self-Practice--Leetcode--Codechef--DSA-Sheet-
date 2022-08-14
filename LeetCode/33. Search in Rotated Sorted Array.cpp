class Solution {
public:
    int binarysearch(vector<int>& arr,int start,int end,int target){
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
int countRotations(vector<int>& arr, int low, int high)
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
    int search(vector<int>& arr, int target) {
    int N = arr.size();
    int ls=binarysearch(arr,0,countRotations(arr, 0, N - 1)-1,target);
    int rs=binarysearch(arr,countRotations(arr, 0, N - 1),N-1,target);
    if(ls==-1 && rs==-1){
        return -1;
    }
    else if(ls!=-1){
        return ls;
    }
    else{
        return rs;
    }
    }
};