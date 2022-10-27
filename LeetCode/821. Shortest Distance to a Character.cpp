class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
      vector<int> store;
        vector<int> res;
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
                store.push_back(i);
        }
        for(int i=0;i<s.length();i++){
            if(s[i]==c)
                res.push_back(0);
            else{
                int temp=INT_MAX;
                for(int j=0;j<store.size();j++){
                    temp=min(temp,abs(store[j]-i));
                }
                res.push_back(temp);
            }
        }
        return res;
    }
};