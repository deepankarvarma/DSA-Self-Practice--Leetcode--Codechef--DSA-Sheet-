class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int map[26]={0};
        for(auto i:allowed){
            map[i-'a']++;
        }
        int flag=true;
        int cnt=0;
        for(auto c:words){
            for(char a:c){
                if(map[a-'a']==0){
                    flag=false;
                    break;}
            }
            if(flag)
                cnt++;
            flag=true;
        }
        return cnt;
    }
};