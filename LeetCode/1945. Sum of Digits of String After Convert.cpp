class Solution {
public:
     int getLucky(string s, int k) {
        int trans,ans;
        string str;
        for(int i=0;i<s.length();i++) {
            int trans = s[i] - 'a' + 1;
            str += to_string(trans);
        }
        for(int i=0;i<k;i++) {              
            ans = 0;
            for(int j=0;j<str.length();j++) {  
                ans += (str[j] - '0');
            }
            str = to_string(ans);            
        }
        return ans;
    }
};