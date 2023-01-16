class Solution {
public:
    int digitsum(vector<int> n){
        int sum=0;
        for(auto a:n)
        while(a>0){
            sum+=a%10;
            a/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& v) {
        int sum = accumulate(v.begin(), v.end(), 0)- digitsum(v); 
        return sum;
    }
};