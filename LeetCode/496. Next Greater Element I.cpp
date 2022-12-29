class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        for (int i=0; i<nums1.size(); i++){
            int j= find(nums2.begin(),nums2.end(),nums1[i])-nums2.begin();
            for (int it=j+1; it<nums2.size(); it++){
                if (nums2[it]>nums2[j]){
                    ans[i]=nums2[it];
                    break;
                }
                
            }
           
        }
        return ans;
    }
};