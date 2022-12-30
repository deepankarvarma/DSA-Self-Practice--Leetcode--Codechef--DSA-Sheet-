class Solution {
public:
    int minOperations(string s) {
        int c0=0,c1=0;
        for(int i=0;i<s.length();i++){
            if(s[i]-'0'!=i%2){
                c1++;
            }
            else{
                c0++;
            }
        }
        return min(c0,c1);
    }
};