class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int nd=0;
        int sum=0;
        int tsum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<=nums[i];j++){
                if(nums[i]%j==0){
                    nd++;
                    tsum+=j;
                }
            }
            if(nd==4){
                sum+=tsum;
            }
            nd=0;
            tsum=0;
        }
            return sum;
    }
};