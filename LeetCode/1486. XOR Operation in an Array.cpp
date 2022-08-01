class Solution {
public:
    int xorOperation(int n, int start) {
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        int sumx=nums[0];
        for(int i=1;i<n;i++){
            sumx=sumx^nums[i];
        }
        return sumx;
    }
};