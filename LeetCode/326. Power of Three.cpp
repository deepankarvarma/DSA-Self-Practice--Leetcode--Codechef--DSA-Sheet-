class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n<=0)
                return false;
            else if(pow(3,int(log10(n)/log10(3)))==n)
            return true;
           else
           return false;
    }
};