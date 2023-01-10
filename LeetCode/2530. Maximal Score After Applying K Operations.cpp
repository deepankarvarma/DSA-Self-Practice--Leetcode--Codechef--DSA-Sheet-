class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long ans = 0;
        while(k--){
            double t = pq.top();
            pq.pop();
            ans+=t;
            pq.push(ceil(t/3));
        }
        return ans;
    }
    
};