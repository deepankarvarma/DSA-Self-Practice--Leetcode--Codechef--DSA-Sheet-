class Solution {
public:
    int longestOnes(vector<int>& nums, int K) {
        int i=0;
        int j=0;
        while(i<nums.size()){
            if(nums[i]==0)
                K--;
            if(K<0){
                if(nums[j]==0)
                    K++;
                j++;
            }
            i++;
        }
        return i-j;
    }
};