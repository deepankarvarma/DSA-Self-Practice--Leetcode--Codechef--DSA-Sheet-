class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int res = 0, n = nums.size();
        unordered_map<int, int> m;
        
        m[nums[0] + nums[1]] = 1;
        
        for(int i=2; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                res += m[nums[j] - nums[i]];
            }
            
            for(int j=0; j<i; j++) {
                m[nums[j] + nums[i]] += 1;
            }
        }
        return res;
    }
};