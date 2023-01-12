class Solution {
public:
    int minFlips(string target) {
        char a='0';
        int ans=0;
        for(auto ch:target){
            if(a!=ch && a=='0'){
                ans++;
                a='1';
            }
            else if(a!=ch && a=='1'){
                ans++;
                a='0';
            }
        }
        return ans;
    }
};