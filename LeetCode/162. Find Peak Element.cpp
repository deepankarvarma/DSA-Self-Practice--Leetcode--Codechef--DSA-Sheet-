class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int end=arr.size()-1;
        int start=0;
        int res=0;
        
        if(end>=2){
            if(arr[0]>arr[1])
                return 0;
            if(arr[end]>arr[end-1])
                return end;
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
        else if(end==0)
            return 0;
        else 
        {
            if(arr[0]>arr[1])
                return 0;
            else return 1;
        }
    }
};