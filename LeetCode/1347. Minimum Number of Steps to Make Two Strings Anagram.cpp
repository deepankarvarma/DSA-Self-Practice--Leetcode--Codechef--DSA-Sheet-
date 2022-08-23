class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> vec(26,0);
        for(int i=0;i<t.length();i++){
            vec[t[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(vec[s[i]-'a'] > 0)
            vec[s[i]-'a']--;
        }
        int cnt=0;
        for(int i=0;i<vec.size();i++){
            cnt+=vec[i];
        }
       return cnt; 
    }
};