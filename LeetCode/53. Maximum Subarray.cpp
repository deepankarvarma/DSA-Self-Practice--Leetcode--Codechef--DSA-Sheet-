class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n=arr.size();
     int max_sum = 0,min=INT_MIN;
    for(int i = 0 ;i<n;i++)
    {
        max_sum+=arr[i];
        if(min<max_sum)
            min=max_sum;
        if(max_sum<0)
            max_sum=0;
    }
return min ;
    }
};