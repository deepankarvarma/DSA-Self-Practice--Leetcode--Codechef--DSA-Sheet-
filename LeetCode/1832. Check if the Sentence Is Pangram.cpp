class Solution {
public:
    bool checkIfPangram(string s) {
        vector<int> temp(26,0);
        for(int i=0;i<s.size();i++){
                temp[(s[i]-'a')]++;
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]==0)
                return false;
        }
        return true;
    }
};