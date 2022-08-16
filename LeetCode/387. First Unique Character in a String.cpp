class Solution {
public:
    int firstUniqChar(string s) {
    int n=s.size();
    int i;
    int p=0;
  
    for(i=0;i<n;i++)
    {   if(p==0)
        for(int j=0;j<n;j++){
            if(s[i]==s[j] && i!=j){                    
                break;
            }
            else if(j==n-1)
            {
               p=1;
              
            }
        }
    else{
        break;
    }}
    if(p==1)
    {
        return i-1;
    }
    else{
        return -1;
    }
    }
};