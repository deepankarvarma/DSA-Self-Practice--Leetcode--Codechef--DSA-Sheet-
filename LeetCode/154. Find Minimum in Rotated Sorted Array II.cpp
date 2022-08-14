class Solution {
public:
    int countRotations(vector<int>& arr, int low, int high)
{
	if(low>high)
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
    int findMin(vector<int>& nums) {
    vector<int>::iterator it = unique(nums.begin(), nums.end());
    nums.resize(distance(nums.begin(), it));
        return nums[countRotations(nums, 0, nums.size() - 1)];
    }
};