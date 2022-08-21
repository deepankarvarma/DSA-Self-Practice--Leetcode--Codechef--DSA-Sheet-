class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int end=arr.size()-1;
        int start=0;
        int res=0;
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                res=mid;
                break;
            }
            else if(arr[mid]<arr[mid-1]){
                end=mid;
            }
            else
                start=mid;
        }
        return res;
    }
};