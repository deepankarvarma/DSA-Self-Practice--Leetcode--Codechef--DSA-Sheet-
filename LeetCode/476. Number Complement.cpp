class Solution {
public:
     int findComplement(int num) {
        unsigned mask = ~0;
        while( (mask & num) !=0 ) 
            mask = mask << 1;
         cout<<mask;
        return ~num ^ mask;
    }
};