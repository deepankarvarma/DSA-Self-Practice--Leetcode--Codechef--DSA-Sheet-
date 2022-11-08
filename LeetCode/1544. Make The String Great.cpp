class Solution {
public:
    string makeGood(string s) {
        string ans = "";
        int i = 0;
        while(i < s.size()){
            if(i+1 < s.size() && abs(s[i+1]-s[i]) == 32){
                i += 2;
            }
            else{
                ans += s[i++];
            }
        }

        
        if(s == ans){
            return ans;
        }
        return makeGood(ans);
    }
};