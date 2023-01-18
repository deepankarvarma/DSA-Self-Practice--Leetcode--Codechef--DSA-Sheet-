class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
       int n=nums.size();
        int curMax=0,curMin=0,sumMax=nums[0],sumMin=nums[0];
        int tsum=0;
        for(auto a:nums){
            curMax=max(curMax+a,a);
            sumMax=max(sumMax,curMax);
            curMin=min(curMin+a,a);
            sumMin=min(sumMin,curMin);
            tsum+=a;
        }
        return (sumMax>0)?max(sumMax,tsum-sumMin):sumMax;
    }
};