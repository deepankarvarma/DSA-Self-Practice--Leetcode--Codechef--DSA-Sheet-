class Solution {
public:
    bool canJump(vector<int>& nums) {
        int a=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(i+nums[i]>=a)
                a=i;
        }
        
        return a==0?1:0;
    }
    
};