class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int res=0;
        if(nums[end]<target){
            return end+1;
        }
        if(nums[start]>target){
            return start;
        }
        while(start<=end){
            int mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                res=mid;
                start=mid+1;
                
            }
            else
                end=mid-1;
        }
        return res+1;
    }
};