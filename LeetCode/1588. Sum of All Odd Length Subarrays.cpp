class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                if((j-i)%2==0)
                {
                    for(int l=i;l<=j;l++){
                        sum+=arr[l];
                       
                    }
                }
            }
        }
        return sum;
    }
};