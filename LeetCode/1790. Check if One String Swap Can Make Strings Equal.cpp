class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {        
        int diff{0};
        vector<int> mismatch{};
        
        for(int i{0}; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                mismatch.push_back(i);
                diff++;
            }
            
            if(diff > 2)
                return false;
        }
        
        return (diff == 0 || (diff == 2 && (s1[mismatch[0]] == s2[mismatch[1]] && s1[mismatch[1]] == s2[mismatch[0]])));
    }
};