class Solution {
public:
    int countPoints(string rings) {
        unordered_map<int,set<char>>m;
        for(int i=0;i<rings.size();i+=2){
            m[rings[i+1]-'0'].insert(rings[i]);
        }
        int cnt=0;
        for(auto c:m){
            if(c.second.size()==3)
                cnt++;
        }
        return cnt;
    }
};