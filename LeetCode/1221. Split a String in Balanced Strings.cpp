class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int counter=0,res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                counter++;
            }
            else{
                counter--;
            }
            if(counter==0){
                res++;
            }
        }
        return res;
    }
};