class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size()-1;
        int start=0;
        int end=n;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                res=mid;
                break;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return res;
    }
};