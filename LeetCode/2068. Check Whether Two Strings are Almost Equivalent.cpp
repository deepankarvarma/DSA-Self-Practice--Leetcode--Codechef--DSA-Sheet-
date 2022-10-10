class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq(26, 0);
        for (auto c : word1)
            freq[c - 'a']++;
        for (auto c : word2)
            freq[c - 'a']--;
        for (auto l : freq)
            if (l > 3 || l < -3)
                return false;
        return true;
    }
};