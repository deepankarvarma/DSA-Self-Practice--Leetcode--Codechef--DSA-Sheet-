class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> m1;
        map<string,int> m2;
        for(auto i:words1){
            m1[i]++;
        }
        for(auto i:words2){
            m2[i]++;
        }
        int c=0;
        for(auto [i,j]:m1){
            
            if(j==1 && m2[i]==1)
                  c++;
            
        }
        return c;
    }
};