class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        long long int res=0;
        sort(skill.begin(),skill.end());
        int des=skill[0]+skill[skill.size()-1];
        
        for(int i=0;i<skill.size()/2;i++){
            if((skill[i]+skill[skill.size()-1-i])!=des)
               return -1;
            res+=skill[i]*skill[skill.size()-1-i];
        }
        return res;
    }
};