class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
          int lo=0,hi=nums.size()-1;
        while(lo<=hi){
            int mid=(lo+hi)>>1;
            if(mid%2==0){
                if(mid<hi && nums[mid]==nums[mid+1])lo=mid+1;
                else if(mid>lo && nums[mid-1]==nums[mid])hi=mid-1;
                else return  nums[mid];
            }
            else{
                if(mid>lo && nums[mid]==nums[mid-1])lo=mid+1;
                else if(mid<hi && nums[mid+1]==nums[mid])hi=mid-1;
                else return nums[hi];
            }
        }
        return nums[hi];
    }
};