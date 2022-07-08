class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> sa;
        sa=nums1;
        for(int i=0;i<nums2.size();i++){
            sa.push_back(nums2[i]);
        }
        sort(sa.begin(),sa.end());
        double result;
        if((sa.size())%2==0){
            int a=sa[sa.size()/2];
            int b=sa[sa.size()/2-1];
            result=(b+a)/(2*(1.00));
        }
        else{
            result=sa[sa.size()/2]/(1.00);
        }
        return result;
    }
};