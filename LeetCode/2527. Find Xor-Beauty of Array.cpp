int xorBeauty(vector<int>& nums) {
        int ans = 0;
        for(auto n: nums) ans = ans^n;
        return ans;
    }