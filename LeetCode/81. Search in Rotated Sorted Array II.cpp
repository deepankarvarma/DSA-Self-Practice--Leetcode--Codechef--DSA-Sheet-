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
    bool search(vector<int>& nums, int target) {
       vector<int>::iterator it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
    int N = nums.size();
    int ls=binarysearch(nums,0,countRotations(nums, 0, N - 1)-1,target);
    int rs=binarysearch(nums,countRotations(nums, 0, N - 1),N-1,target);
    if(ls==-1 && rs==-1){
        return false;
    }
    else {
        return true;
    }
    }
};