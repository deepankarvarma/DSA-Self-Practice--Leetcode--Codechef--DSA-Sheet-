class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int sum=0;
        while(i<j){
            int temp=nums[i]+nums[j];
            sum=max(sum,temp);
            i++;
            j--;
        }
        return sum;
    }
};