class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string res="";
        int temp=1;
        for(int i=0;i<words.size();i++){
            
            for(int j=0;j<words[i].size()/2;j++){
                if(words[i][j]!=words[i][words[i].size()-j-1]){
                    temp=0;
                }
            }
            if(temp!=0){
                res=words[i];
                break;
            }
            temp=1;
        }
        return res;
    }
};