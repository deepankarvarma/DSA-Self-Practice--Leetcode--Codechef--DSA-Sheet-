class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startidx=-1,endidx=-1;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==target)
           {
                startidx=i;
               break;
           }
          
       }
        for(int i=nums.size()-1;i>=0;i--){
           if(nums[i]==target)
           {
                endidx=i;
               break;
           }
          
       }
        return {startidx,endidx};
    }
};