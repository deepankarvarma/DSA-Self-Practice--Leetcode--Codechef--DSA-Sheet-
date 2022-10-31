class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int temp=original;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
           while(nums[i]==temp){
               temp=temp*2;
           }
       } 
    
    return temp;
    }
};