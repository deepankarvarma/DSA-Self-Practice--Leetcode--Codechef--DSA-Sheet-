class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int maxele=max_element(nums.begin(),nums.end())-nums.begin();
        int minele=min_element(nums.begin(),nums.end())-nums.begin();
        int n=nums.size();
        cout<<maxele;
        return min(max(maxele,minele)+1,
                    min(n-min(maxele,minele), 
                    min(maxele,minele)+1+n-max(maxele,minele)));
    }
};