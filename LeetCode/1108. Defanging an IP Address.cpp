class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for(int i=0;i<address.length();i++){
            cout<<address[i];
            if(address[i]=='.'){
                s+="[";
                 s+=".";
                 s+="]";
            }
            else
                  s+=address[i];
        }
        return s;
    }
};