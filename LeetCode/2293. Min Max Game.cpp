class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()!=1){
            vector<int> ans(nums.size()/2,0);
            for(int i=0;i<ans.size();i++){
                if(i%2==0){
                    ans[i]=min(nums[2*i],nums[2 * i + 1]);
                }
                else{
                    ans[i]=max(nums[2*i],nums[2 * i + 1]);
                }
            }
            nums=ans;
        }
        return nums[0];
    }
};