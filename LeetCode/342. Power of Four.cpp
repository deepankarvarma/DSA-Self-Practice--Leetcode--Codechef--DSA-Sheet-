class Solution {
public:
    bool isPowerOfFour(int n) {
         if(n<=0)
                return false;
            else if(pow(4,int(log10(n)/log10(4)))==n)
            return true;
           else
           return false;
    }
};