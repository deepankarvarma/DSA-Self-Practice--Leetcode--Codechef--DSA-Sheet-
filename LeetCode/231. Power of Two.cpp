class Solution {
public:
    bool isPowerOfTwo(int n) {
            if(n<=0)
                return false;
            else if(pow(2,int(log2(n)))==n)
            return true;
           else
           return false;
    }
};