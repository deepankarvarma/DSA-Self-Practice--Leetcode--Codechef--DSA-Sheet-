class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n,0);
        int left=0;
        int right=n-1;
        int start=1;
        while(left<right){
            ans[left++]=start;
            ans[right--]=-start;
            start++;
        }
        return ans;
    }
    
};