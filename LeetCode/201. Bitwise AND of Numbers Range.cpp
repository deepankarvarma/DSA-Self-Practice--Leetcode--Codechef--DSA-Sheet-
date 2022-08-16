class Solution {
public:
    int setBitNumber(int n)
{
    if (n == 0)
        return 0;
 
    int msb = 0;
    n = n / 2;
    while (n != 0) {
        n = n / 2;
        msb++;
    }
 
    return msb;
}
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 || right==0)
            return 0;
        int res=0;
        if(setBitNumber(left)!=setBitNumber(right))
            return 0;
        else{
            
            while(setBitNumber(left)==setBitNumber(rigxht) && setBitNumber(left)>0){
                res+=pow(2,setBitNumber(left));
                left=left-pow(2,setBitNumber(left));
                right=right-pow(2,setBitNumber(right));
                cout<<left<<right;
            }
            if(left==right && left==1)
                res+=1;
        }
        return res;
    }
};