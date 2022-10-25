class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans;
        int cnt=0;
        for(int i=0;i<word.size();i++){
            if(word[i]!=ch){
                ans+=word[i];
                cnt++;
                
            }
            if(word[i]==ch){
                ans+=word[i];
                cnt++;
                break;
            }
            if(i==word.size()-1){
                return word;
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=cnt;i<word.size();i++){
            ans+=word[i];
        }
        return ans;
    }
};