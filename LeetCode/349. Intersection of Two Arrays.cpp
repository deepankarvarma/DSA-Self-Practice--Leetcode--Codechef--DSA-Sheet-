class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> s;
        int i=0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size();
        int n=nums2.size();
        while(i<m && j<n){
            if(nums1[i]==nums2[j]){
                s.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j])
                i++;
            else 
                j++;
        }
        vector<int>::iterator ip;
        sort(s.begin(), s.end());
        ip = unique(s.begin(), s.end());
        s.resize(distance(s.begin(), ip));
        return s;
    }
};