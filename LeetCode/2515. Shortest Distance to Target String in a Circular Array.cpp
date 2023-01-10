class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int res=INT_MAX;
        int n =words.size();
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                res=min(res,min(abs(startIndex-i),abs(n-abs(startIndex-i))));
            }
        }
        if(res>words.size())
            return-1;
        return res;
    }
};